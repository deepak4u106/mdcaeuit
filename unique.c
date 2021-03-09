#include"header.h"
#include"declaration.h"

void* unique(void* arg){
//	printf("%s Begin\n", __func__);
	DsUnique *d;
	int len;
	d = (DsUnique*)arg; 
	len = strlen(d->ma);
	int *flag;
	flag = (int*)malloc(sizeof(int));
	if(!flag){
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}
	int i;
	*flag = 1;
	for(i = 0 ; i < len ; ++i){
		if(d->ch == *(d->ma+i) || d->ch == ' '){
			*flag = 0;
		}
	}
//	printf("Unique Array: %s\n", d->ma);
//	printf("%s End\n", __func__);
	return (void*)flag;
}
