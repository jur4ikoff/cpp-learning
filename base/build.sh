#!/bin/bash

if [[ $# != 1 ]]; then
    exit 1
else
    filename=$1
fi

CPPFLAGS="-std=c++20 -Wall -Werror"
clang++ $CPPFLAGS "$filename" -o app.exe