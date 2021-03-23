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

	return 0;	
}
