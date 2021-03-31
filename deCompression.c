#include"header.h"
#include"declaration.h"

void* deCompression(void* arg)
{
	int eky,noc,ret,size;
	char *ma;
	int *cl;
	cl = (int*)malloc(sizeof(int));
	printf("%s : Begin\n",__func__);
	eky = *(int*)(*fptr[6])((void*)"reading"); // openFile();
	noc = lseek(eky,0,SEEK_END);
	lseek(eky,0,SEEK_SET);
	printf("N O C : %d\n", noc);
	ma = (char*)malloc(sizeof(char)*noc);
	memset(ma,'0',noc);
	ret = read(eky,ma,noc);
	if(ret == -1)
	{
		perror("read");		
		(*fptr[1])((void*)"failure");
	}
	
	cl = (int*)(*fptr[9])((void*)ma); //getLen();	
	if(*cl >= 2 && *cl <= 7)
		(*fptr[*cl + 15])((void*)ma); // deCompress2-7();
	close(eky);
	printf("%s : End\n",__func__);
}
