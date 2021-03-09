#include"header.h"
#include"declaration.h"

void* openFile(void *arg){
	printf("%s Begin\n", __func__);
	char *getFile;
	getFile = (char*)malloc(20);
	char ch;
	int *fd; // Assign as pointer because we have to return the value of fd 
	int i = 0;
	do{
		ch = getchar();
		if(ch == '\n'){
			break;
		}
		*(getFile + i++) = ch;

	}
	while(1);
	
	printf("%s\n", getFile);
	// Assign memory to "fd" and check if the malloc work properly or not
	fd = (int*)malloc(sizeof(int));
		
	if(!fd){
		perror("malloc");
		(*fptr[1])((void*)"failure");

		}
	//-----------------------------------------------------------------------
	// open file either in read mode or write mode		
	if(strncmp(arg,"reading",7) == 0){	
		*fd = open(getFile, O_RDONLY); // open the file in read mode
	}
	else if(strncmp(arg, "writing", 7) == 0){
		*fd = open(getFile, O_WRONLY | O_CREAT); // open file in write mode or create the file if it is not present
	}
	
	printf("%s End\n", __func__);
	return (void*)fd;
}
