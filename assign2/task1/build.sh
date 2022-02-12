#!/bin/bash
gcc -std=c11 -Wall intro.c -o intro
./intro>intro.out
touch intro.in
./intro <intro.in> intro.out
