#!/bin/bash

folder="Av_2"

subfolders=$(find "$folder" -type d)

for subfolder in $subfolders; do
	cp /dev/null "$subfolder/basic.cpp"
done

echo "Files created"
