#include"header.h"
#include"declaration.h"

void* compression(void* arg)
{
	init();
	int fd;
	int *cl;
	printf("\n%s: Begin\n", __func__);
	cl = (int*)malloc(sizeof(int));
	Dscompress *a;
	a = (Dscompress*)malloc(sizeof(Dscompress));
	if(!a)
	{
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}
	DsUnique *d;
	printf("Give the name of the file to compress\n");
	// Capturing file discriptor from openFile

	a->fd = *(int*)(*fptr[6])((void*)"reading"); // openFile();
	printf("fd = %d\n", a->fd);
	if(a->fd == -1)
		printf("File opened un-successfuly with file discriptior : %d\n", a->fd);
	else
		printf("File opened successfuly with file discriptior : %d\n", a->fd);
	
	d = (*fptr[7])((void*)&a->fd); // CreateMasterArray()
	printf("%s \n", d->ma);
	a->ma = d->ma;
	printf("TEST %s \n", a->ma);
	cl = (*fptr[9])((void*)d->ma);     //get lenth of the master array
	printf("CL : %d \n", *cl);
		
	if(*cl >= 2 && *cl <= 7)
		(int*)(*fptr[*cl + 8])((void*)a);

	close(a->fd);
	printf("%s: End\n", __func__);
	return 0;
}
