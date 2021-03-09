#include"header.h"
#include"declaration.h"

void* compression(void* arg){
	init();
	printf("\n%s: Begin\n", __func__);
	int fd;
	int *cl;
	cl = (int*)malloc(sizeof(int));
	
	DsUnique *d;
	printf("Give the name of the file to compress\n");
	// Capturing file discriptor from openFile

	fd = *(int*)(*fptr[6])((void*)"reading");
	if(fd == -1){
		printf("File opened un-successfuly with file discriptior : %d\n", fd);

	}
	else
		printf("File opened successfuly with file discriptior : %d\n", fd);


	d = (*fptr[7])((void*)&fd); // unique()
	printf("%s \n", d->ma);
	close(fd);
	cl = (*fptr[9])((void*)d); //get lenth of the master array
	printf("%d \n", *cl);

	printf("%s: End\n", __func__);

	return 0;

}
