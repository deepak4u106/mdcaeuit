#include"header.h"
#include"declaration.h"

void* mainMenu(void*);
void* compression(void*);
void* compStats(void*);
void* deCompression(void*);
void* deCompStats(void*);
void* exitF(void*);
void* openFile(void*);
void* createMasterArray(void*);
void* getLen(void*);
void* unique(void*);


void* compress2(void*);
void* compress3(void*);
void* compress4(void*);
void* compress5(void*);
void* compress6(void*);
void* compress7(void*);

void* getIndex(void*);

void* deCompress2(void*);
void* deCompress3(void*);
void* deCompress4(void*);
void* deCompress5(void*);
void* deCompress6(void*);
void* deCompress7(void*);
void* printBits(void*);



void* (*fptr[NOF])(void*);
int init(){

	
	fptr[0] = mainMenu;
	fptr[1] = exitF;
	fptr[2] = compression;
	fptr[3] = compStats;
	fptr[4] = deCompression;
	fptr[5] = deCompStats;
	fptr[6] = openFile;
	fptr[7] = createMasterArray;
	fptr[8] = unique;
	fptr[9] = getLen;
	
	fptr[10] = compress2;
	fptr[11] = compress3;
	fptr[12] = compress4;
	fptr[13] = compress5;
	fptr[14] = compress6;
	fptr[15] = compress7;

	fptr[16] = getIndex;
	
	fptr[17] = deCompress2;
	fptr[18] = deCompress3;
	fptr[19] = deCompress4;
	fptr[20] = deCompress5;
	fptr[21] = deCompress6;
	fptr[22] = deCompress7;
	fptr[22] = printBits;

	return 0;	
}
