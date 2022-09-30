#!/bin/sh

echo "files with user read , write , execute permissions "
find -perm -u=r+w+x
