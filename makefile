#! /bin/bash

out:main.o mainMenu.o compression.o compStats.o deCompression.o deCompStats.o exit.o openFile.o init.o createMasterArray.o unique.o getLen.o
	gcc -o out main.o mainMenu.o compression.o compStats.o deCompression.o deCompStats.o exit.o openFile.o init.o createMasterArray.o unique.o getLen.o

getLen.o: getLen.c header.h
	gcc -c getLen.c
unique.o: unique.c header.h
	gcc -c unique.c
creatMasterArray.o: createMasterArray.c header.h
	gcc -c createMasterArray.c
openFile.o: openFile.c header.h declaration.h
	gcc -c openFile.c
main.o: main.c header.h declaration.h
	gcc -c main.c
mainMenu.o: mainMenu.c header.h declaration.h
	gcc -c mainMenu.c
compression.o: compression.c header.h declaration.h
	gcc -c compression.c
compStats.o: compStats.c header.h declaration.h
	gcc -c compStats.c
deCompression.o: deCompression.c header.h declaration.h
	gcc -c deCompression.c
deCompStats.o: deCompStats.c header.h declaration.h
	gcc -c deCompStats.c
exit.o:exit.c header.h declaration.h
	gcc -c exit.c
init.o:init.c header.h declaration.h
	gcc -c init.c

clean:
	rm *.o
	rm out
