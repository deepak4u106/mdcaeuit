#include"header.h"
#include"declaration.h"

void* createMasterArray(void *arg)
{
	char ch;
	int fd,ret,i;
	printf("%s Begin\n", __func__);
//	char *ma;
	DsUnique *d;
	Dscompress *a;	
	a = (Dscompress*)malloc(sizeof(Dscompress));
	if(!a)
	{
		perror("malloc");
		(*fptr[1])((void*)"failure");
	}
	d->ma = (char*)malloc(128);
	
	if(!d){
		perror("malloc");
		(*fptr[1])((void*)"failure");
	} 
	memset(d->ma,'\0',128);

	a->fd = *(int*)arg;		        //taking file discriptor to read the file coming from argument passed in function
	i = 0;
	
//	d->ma = ma;
	a->ma = d->ma;
	while(1)
	{
		ret = read(a->fd,&d->ch,1); 	 //read the file using file discriptor, "buffer" , no of char to read
		if(ret == -1)
		{				 // Check if RET = -1 then exit failure
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		else if(ret == 0){ 
			break;
		}
	
//		d->ch = ch;
		if(*(int*)(*fptr[8])((void*)d))  // Unique Fn
			*(d->ma + i++) = d->ch;
	}
	int noc;
	noc = lseek(a->fd,0,SEEK_END);
	lseek(a->fd,0,SEEK_SET);
	printf("N O C : %d\n", noc);
//	d->ma = ma;
//	printf("ma : %s\n", ma);
	printf("d->ma : %s\n", d->ma);
	printf("a->ma : %s\n", a->ma);
	

	printf("%s End\n", __func__);
	return (void*)d;
}
