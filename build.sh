#!/bin/bash

root=$PWD

mkdir build
cd build

cmake -D CMAKE_PREFIX_PATH:PATH=$root/sfml/lib ..

make

cp -r $root/src/textures .
cp -r $root/src/fonts .
