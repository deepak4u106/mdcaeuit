#include"header.h"
#include"declaration.h"

void* compress4(void* arg)
{
	int cfd;
	int ret,noc;
	int index;
	unsigned char byt,ch;
	printf("%s Begin\n", __func__);

	Dscompress *a;
	a = (Dscompress*)malloc(sizeof(Dscompress));
	DsUnique *d;
	d = (DsUnique*)malloc(sizeof(DsUnique));
	a = (Dscompress*)arg;
	printf("TEST : %s\n", a->ma);
	noc = lseek(a->fd,0,SEEK_END)-1;
	lseek(a->fd,0,SEEK_SET);
	d->ma = a->ma;
	
	cfd = *(int*)(*fptr[6])((void*)"creat|writing"); // openFile();
	
	while(noc >= 0)
	{
		byt ^= byt;			//byt = 0000 0000
		ret = read(a->fd,&d->ch,1);	// ch='i'

		if(ret == -1)
		{
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		else if(ret == 0)
			break;
		

		index = *(int*)(*fptr[16])((void*)d); // getIndex() // 00000004
		ch = (unsigned char)index;
		ch <<=4; 	// To remove the garbage values from the binary code // 00040000
		byt |= ch; 	// 0000 0000 |= 0004 0000(For example) // 0004 0000
		noc--;
		// 0004 0000
//----------------------------------------------------------------------------------------------------
		ret = read(a->fd,&d->ch,1);	// ch='i'

		if(ret == -1)
		{
			perror("read");		
			(*fptr[1])((void*)"failure");
		}
		else if(ret == 0)
			break;

		index = *(int*)(*fptr[16])((void*)d);   // getIndex() 5th index -> 00000005
		ch = (unsigned char)index; 		// 0000 0005
		ch <<=4; 		   		// 0005 0000
		ch >>=4; 		   		// 0000 0005
		byt |= ch; 		   		// 0004 0000 |= 0000 0005 -> 00040005
		noc--;
		
		ret = write(cfd,&byt,1); 		// Return number of bytes

		if(!ret)
		{
			perror("write");
			(*fptr[1])((void*)"failure");
		}
		if(noc == 0)
		{
			byt ^= byt;
			index = *(int*)(*fptr[16])((void*)d);   // getIndex() 5th index -> 00000005
			ch = (unsigned char)index;
			byt |= ch;
			ret = write(cfd,&byt,1);
		}
	}


	printf("%s End\n", __func__);





}
