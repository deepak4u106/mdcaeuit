#include"header.h"
#include"declaration.h"

void* deCompression(void* arg)
{
	int eky,noc,ret,size;
	char *ma;
	int *cl;
	cl = (int*)malloc(sizeof(int));
	printf("%s : Begin\n",__func__);
	noc = lseek(eky,0,SEEK_END)-1;
	lseek(eky,0,SEEK_SET);
	eky = *(int*)(*fptr[6])((void*)"reading"); // openFile();
	size = strlen(ma);
	printf("S I Z E %d\n", size);
	ret = read(eky,ma,size);
	if(ret == -1)
	{
		perror("read");		
		(*fptr[1])((void*)"failure");
	}
	
	cl = *(int*)(*fptr[9])((void*)ma);	
	
	if(*cl >= 2 && *cl <= 7)
	{
		(*fptr[*cl + 15])((void*)ma);
	
	
	}

	printf("%s : M A : %s \n", __func__,ma);

	printf("%s : End\n",__func__);


}
