#!/usr/bin/env bash

mkdir -p bin
clang -Wall -O0 -g ./main.c -o ./bin/main
