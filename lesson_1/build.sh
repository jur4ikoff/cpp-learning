#!/bin/bash

# Путь к скрипту
path_to_script=$(dirname "$(readlink -f "$0")")

if [[ $# != 1 ]]; then
    exit 1
else
    filename=$1
fi

CPPFLAGS="-std=c++20 -Wall -Werror"
clang++ "$CFLAGS" "$filename" -o app.exe