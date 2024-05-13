#!/bin/bash

dr_path=$1
size=$(($(du -s "$dr_path" 2>/dev/null | cut -f 1) * 1024))

low=$((1024 * 1024))
mid=$(($low * 10))
if [ $size -lt $low ]; then
    echo "Low"
elif [ $size -lt $mid ]; then
    echo "Medium"
else
    echo "High"
fi