#STATIC=1
calci:
	echo "build done"
ifdef STATIC
calci:src/main/main.o lib/libcalci.a
	gcc -static src/main/main.o lib/libcalci.a -o calci
else
calci:src/main/main.o lib/libcalci.so
	gcc src/main/main.o -L lib/libacalci.so -o calci
endif

src/main/main.o:
	make -C src/main
lib/libcalci.a:
	make -C lib/ static
lib/libcalci.so:
	make -C lib/ dynamic

clear:
	make -C main
	make -C lib

install:
	cp calci bin/
