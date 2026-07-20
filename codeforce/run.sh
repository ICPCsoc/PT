#!/bin/bash

if [ $# -eq 0 ]; then
  echo "Usage: $0 <cpp_file>"
  echo "Example: $0 main.cpp"
  exit 1
fi

mkdir -p bits

echo '#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>' > bits/stdc++.h

clang++ "$1" -o ${1%.*}

if [ $? -eq 0 ]; then
    ./"${1%.*}"
else
    echo "Compilation failed!"
    exit 1
fi