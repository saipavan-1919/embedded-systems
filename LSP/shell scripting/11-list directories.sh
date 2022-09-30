#!/bin/sh

echo "enter directory path"
read path

	if [ -d $path ]
	then
		echo "direcories in $path are:"
	        ls $path/*/ | ls --ignore=*.*
	else
		 echo "directory not found"
	fi
