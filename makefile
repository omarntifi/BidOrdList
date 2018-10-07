all: llista

main.o: main.c llista.h
	gcc main.c -c -Wall -Wextra

llista.o: llista.c llista.h
	gcc llista.c -c -Wall -Wextra

llista: main.o llista_bidireccional.o
	gcc main.o llista.o -o llista_bid -Wall -Wextra

clean:
	rm *.o llista_bid