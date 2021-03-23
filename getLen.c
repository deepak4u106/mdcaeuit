#include"header.h"
#include"declaration.h"

void* getLen(void* arg){
	printf("%s : Begin\n", __func__);
	DsUnique *d;		
	
	d = (DsUnique*)arg;
	int len;
	int *cl;
	cl = (int*)malloc(sizeof(int)); 

	len = strlen(d->ma);
	printf("%s : %d\n",__func__ ,len);	
	if(len < 4)
		*cl = 2;	// 2^2 = 4
	else if(len < 8)
		*cl = 3;	// 2^3 = 8
	else if(len < 16)
		*cl = 4;	// 2^4 = 16
	else if(len < 32)
		*cl = 5;	// 2^5 = 32
	else if(len < 64)
		*cl = 6;	// 2^6 = 64
	else if(len < 128)
		*cl = 7;	// 2^7 = 128
	printf("%s : End\n", __func__);

	return (void*)cl;
}

