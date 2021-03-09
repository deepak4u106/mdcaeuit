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
	
	return 0;	
}
