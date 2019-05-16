exec = vol.out
flags = -g -Wall -lasound
sources = $(wildcard src/*.c)
objects = $(sources: .c=.o)


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec) -fPIC


%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@ -fPIC

install:
	make
	mv $(exec) /usr/local/bin/vol

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
