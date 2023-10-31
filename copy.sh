#!/bin/bash

file_list=("4-strpbrk.c" "3-strspn.c" "3-strcmp.c" "100-atoi.c" "1-memcpy.c" "1-strncat.c" "2-stcrchr.c" "5-strstr.c" "6-abs.c" "9-strcpy.c")

start_dir="/"


for filename in "${file_list[@]}"; do
  echo "Searching for: $filename"
  find "$start_dir" -name "$filename" -exec cp {} . \;
done
