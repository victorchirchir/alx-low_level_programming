!#/bin/bash
SRC = $(ls *.c)
for file in $SRC
do
	gcc $file
done
ar rcs liball.a *.o
