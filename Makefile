all: main

main: main.o printbits.o rotateleftbynbits.o rotaterightbynbits.o rotatefirstnbitsright.o rotatefirstnbitsleft.o
	gcc main.o printbits.o rotateleftbynbits.o rotaterightbynbits.o rotatefirstnbitsright.o rotatefirstnbitsleft.o -o main

main.o: main.c
	gcc -c main.c -o main.o

printbits.o: printbits.c
	gcc -c printbits.c -o printbits.o

rotateleftbynbits.o: rotateleftbynbits.c
	gcc -c rotateleftbynbits.c -o rotateleftbynbits.o

rotaterightbynbits.o: rotaterightbynbits.c
	gcc -c rotaterightbynbits.c -o rotaterightbynbits.o

rotatefirstnbitsright.o: rotatefirstnbitsright.c
	gcc -c rotatefirstnbitsright.c -o rotatefirstnbitsright.o

rotatefirstnbitsleft.o: rotatefirstnbitsleft.c
	gcc -c rotatefirstnbitsleft.c -o rotatefirstnbitsleft.o

clean:
	rm -f main *.o *~
