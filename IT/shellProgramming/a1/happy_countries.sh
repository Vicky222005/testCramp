#!/bin/bash

content=$(curl -s -L "https://en.wikipedia.org/wiki/World_Happiness_Report?action=raw")
newcontent=$(echo $content | grep -oE "(===2018).*(===2017)")
newnewcontent=$(echo $newcontent | grep -oE "(\|- \| 1\|).*(\|- \| 11\|)")
newnewnewcontent=$(echo $newnewcontent | grep -oE "\w+\}")
echo $newnewnewcontent | grep -oE "\w+"