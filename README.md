# PyMB
Python Model Builder - fit statistical models using algorithmic differentiation

[![Build Status](https://travis-ci.com/sadatnfs/PyMB.svg?branch=master)](https://travis-ci.com/sadatnfs/PyMB)


## Concept
PyMB uses [algorithmic differentiation](http://en.wikipedia.org/wiki/Automatic_differentiation) from 
[CppAD](http://www.coin-or.org/CppAD/) to compute derivatives of objective functions, allowing users to quickly find 
optimal solutions to large, multidimensional statistical models.

## Implementation
#### Current
PyMB is currently just a light wrapper around [Template Model Builder](https://github.com/kaskr/adcomp), allowing users to run 
TMB models directly from Python by transparently passing `numpy` and other numeric data into an embedded `rpy2` instance. 
TMB models are specified using C++ templates, requiring the user to be at least somewhat familiar with C++.

#### Future
We intend to make a fully Pythonic modeling library that closely mirrors [PyMC2](https://github.com/pymc-devs/pymc) in syntax
and ease of model specification, but uses either [CppAD mixed](https://github.com/bradbell/cppad_mixed) or [TensorFlow](https://github.com/tensorflow/tensorflow) under the hood.

## Example
A demo [iPython notebook](http://ipython.org/notebook.html) can be found at 
[Examples/Linear Regression.ipynb](Examples/Linear Regression.ipynb) or an online version can be viewed [here](http://nbviewer.ipython.org/github/kforeman/PyMB/blob/master/Examples/Linear%20Regression%20-%20Magic.ipynb).

## Installation
An example Dockerfile that will create a working PyMB install can be found [here](Dockerfile).

The following can be run to install PyMB directly from the GitHub repo:
```sh
pip install git+https://github.com/sadatnfs/PyMB.git
```

#### Note
The user must have a working installation of R (http://www.r-project.org/) and the TMB package (https://github.com/kaskr/adcomp), such that R is available on the PATH. Possibilities include setting up a conda environment with R installed and activating it, or installing R from source.

#### Dependencies
* [R](http://www.r-project.org/)
* [TMB](https://github.com/kaskr/adcomp)
* [rpy2](http://rpy.sourceforge.net/)
* [numpy](http://www.numpy.org/)
* [scipy](https://scipy.org/)
* [sksparse](https://github.com/scikit-sparse/scikit-sparse)


## License (GPLv2)
    PyMB - Python Model Builder
    Copyright (C) 2015 Kyle Foreman
    Email: kforeman <at> post <dot> harvard <dot> edu
  
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
