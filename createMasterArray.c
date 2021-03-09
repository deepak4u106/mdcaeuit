#include"header.h"
#include"declaration.h"

void* createMasterArray(void *arg){
	printf("%s Begin\n", __func__);
	char *ma;
	char ch;
	int fd,ret,i;
	DsUnique *d;
	
	ma = (char*)malloc(128);
	
	if(!ma){
		perror("malloc");
		(*fptr[1])((void*)"failure");
	} 
	memset(ma,'\0',128);

	fd = *(int*)arg;		 //taking file discriptor to read the file coming from argument passed in function
	i = 0;
	
	d->ma = ma;
	while(1){
		ret = read(fd,&ch,1); 	 //read the file using file discriptor, "buffer" , no of char to read
		if(ret == -1){		 // Check if RET = -1 then exit failure
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		if(ch == '\n'){ 
			break;
		}
	
		d->ch = ch;
		if(*(int*)(*fptr[8])((void*)d)){
			*(d->ma + i++) = d->ch;
		}
	}
//	d->ma = ma;
	printf("ma : %s\n", ma);
	printf("d->ma : %s\n", d->ma);
	

	printf("%s End\n", __func__);
	return (void*)d;
}
