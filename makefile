#! /bin/bash

out:main.o mainMenu.o exitFunc.o compression.o deCompression.o compStats.o deCompStats.o openFile.o init.o createMasterArray.o unique.o compress2.o compress3.o compress4.o compress5.o compress6.o compress7.o getIndex.o getLen.o deCompress2.o deCompress3.o deCompress4.o deCompress5.o deCompress6.o deCompress7.o
	gcc -o out main.o mainMenu.o exitFunc.o compression.o deCompression.o compStats.o deCompStats.o openFile.o init.o createMasterArray.o unique.o compress2.o compress3.o compress4.o compress5.o compress6.o compress7.o getIndex.o getLen.o deCompress2.o deCompress3.o deCompress4.o deCompress5.o deCompress6.o deCompress7.o

deCompress7.o:deCompress7.c declaration.h header.h
	gcc -c deCompress7.c
deCompress6.o:deCompress6.c declaration.h header.h
	gcc -c deCompress6.c
deCompress5.o:deCompress5.c declaration.h header.h
	gcc -c deCompress5.c
deCompress4.o:deCompress4.c declaration.h header.h
	gcc -c deCompress4.c
deCompress3.o:deCompress3.c declaration.h header.h
	gcc -c deCompress3.c
deCompress2.o:deCompress2.c declaration.h header.h
	gcc -c deCompress2.c
getLen.o:getLen.c header.h declaration.h
	gcc -c getLen.c
getIndex.o:getIndex.c header.h declaration.h
	gcc -c getIndex.c
compress7.o:compress7.c header.h declaration.h
	gcc -c compress7.c
compress6.o:compress6.c header.h declaration.h
	gcc -c compress6.c
compress5.o:compress5.c header.h declaration.h
	gcc -c compress5.c
compress4.o:compress4.c header.h declaration.h
	gcc -c compress4.c
compress3.o:compress3.c header.h declaration.h
	gcc -c compress3.c
compress2.o:compress2.c header.h declaration.h
	gcc -c compress2.c
unique.o:unique.c header.h declaration.h
	gcc -c unique.c
createMaterArray.o:createMasterArray.c header.h declaration.h
	gcc -c createMasterArray.c
init.o:init.c header.h declaration.h
	gcc -c init.c
main.o:main.c header.h declaration.h
	gcc -c main.c
mainMenu.o:mainMenu.c header.h declaration.h
	gcc -c mainMenu.c
exitFunc.o:exitFunc.c header.h declaration.h
	gcc -c exitFunc.c
compresison.o:compression.c header.h declaration.h
	gcc -c compression.c
compStats.o:compStats.c header.h declaration.h
	gcc -c compStats.c
deCompression.o:deCompression.c header.h declaration.h
	gcc -c deCompression.c
deCompStats.o:deCompStats.c header.h declaration.h
	gcc -c deCompStats.c
openFile.o:openFile.c header.h declaration.h
	gcc -c openFile.c
clean:
	rm out
	rm *.o
	rm compFile
	rm encKey
