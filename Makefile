
all: lib test
	true

gen:
	perl gen.pl > for-gen.c

clean:
	rm -f *.o *.a

.PHONY: test

lib: for.o
	$(AR) rvs libfor.a *.o

test: test.c
	$(CC) -g -O0 -Wall -Wextra -pedantic test.c -o test -L. -lfor 

for.o: for.h for.c for-gen.c
	$(CC) -g -O0 -Wall -Wextra -pedantic for.c -c -o for.o
