#include <TMB.hpp>

template<class Type>
bool isFinite(Type x){
  return R_finite(asDouble(x));
}
template<class Type>

Type objective_function<Type>::operator() () {
// DATA
DATA_VECTOR(Y);
DATA_VECTOR(x);

// PARAMETERS
PARAMETER(alpha);
PARAMETER(Beta);
PARAMETER(logSigma);

// MODEL
int n = Y.size();

vector<Type> Y_hat(n);
Type nll = 0.0;

for (int i = 0; i < n; i++) {
    Y_hat(i) = alpha + Beta * x(i);

    if (isFinite(Y_hat(i))) {
        nll -= dnorm(Y(i), Y_hat(i), exp(logSigma), true);
    }
}


REPORT(Y_hat);

return nll;

}