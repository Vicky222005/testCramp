#!/bin/bash

extension=$1
dir_path=$2

cd $dir_path
tmp=$(find ~+ -type f -maxdepth 1 | grep -E ".*\.("$extension")$")
IFS=$'\n'
for j in $tmp
do
echo $j
regex=$(echo $j | sed "s/\.$extension//")
mv "$j" "$regex"
done
