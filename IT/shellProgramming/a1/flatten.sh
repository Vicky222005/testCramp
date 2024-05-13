#!/bin/bash

source=$1
destination=$2

unzip -o $source -d  $destination
cd "$destination"
for f in $(find ./ -type f)
do
    mv "$f" "./"
done
for dr in $(find ./ -type d)
do
rm -r "$dr"
done
