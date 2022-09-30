if [ $# -eq 2 ]
then
	echo "sum=$(expr $1 + $2)"
else
	echo "error,arguments not equal to 2"
fi
