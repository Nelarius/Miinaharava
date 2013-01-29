#!/bin/bash


ROOT='pwd'

cd build -DCMAKE_PREFIX_PATH=$ROOT/sfml/lib ..

cmake ..

make
