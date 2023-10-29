#!/bin/bash
for file in *.c; do
  gcc -c "$file"
  ar rcs liball.a "${file%.c}.o"
  rm "${file%.c}.o"
done
echo
