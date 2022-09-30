static:libcalci.a
	echo "static lib  build done"
libcalci.a:add/add.o sub/sub.o
	ar -rcs libcalci.a add/add.o sub/sub.o
add.o:
	make -C add/
sub.o:
	make -C sub/


dynamic:libcalci.so
	echo "dynamic lib build done"
libcalci.so:
	gcc -c -fpic add/add.c sub/sub.c
	gcc -shared -o libcalci.so add/add.o sub/sub.o


clean:
	rm *.o libcalci.*

install:
	sudo cp libcalci.* /usr/lib/

