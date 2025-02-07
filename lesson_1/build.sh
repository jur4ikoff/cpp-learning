#!/bin/bash

# Путь к скрипту
path_to_script=$(dirname "$(readlink -f "$0")")

if [[ $# != 1 ]]; then
    exit 1
else
    filename=$1
fi

# CPPFLAGS="-Wall -Werror"
clang++ "$filename" -o app.exe