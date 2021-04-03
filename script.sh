#!/bin/bash

cd $(dirname $0)
rm -rf main *.so *.cxx getter.py
g++ -O2 getter.cpp main.cpp -o main
swig -c++ -python swig.i
g++ -O2 -fPIC -shared -I/usr/include/python3.8 getter.cpp swig_wrap.cxx -o _getter.so
