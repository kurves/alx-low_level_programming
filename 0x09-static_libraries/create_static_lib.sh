#! /bin/bash
files=$(grep -l '\.c$' *)
for file in $files; do
  gcc -c "$file"
done
ar rcs liball.a *.o
