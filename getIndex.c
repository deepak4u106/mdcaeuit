#include"header.h"
#include"declaration.h"


void* getIndex(void* arg){

	int *i;
	i = (int*)malloc(sizeof(int));
	DsUnique *d;
	d = (DsUnique*)malloc(sizeof(DsUnique));

	d = (DsUnique*)arg;
	
	for(*i = 0 ; *i < strlen(d->ma) ; ++*i)
	{
		if(*(d->ma + *i) == d->ch){
			
			return (void*)i;
		}

	}

	printf("%s : Error END\n", __func__);
	return (void*)i;

}

