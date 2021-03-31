#include"header.h"
#include"declaration.h"

void* compress4(void* arg)
{
	int cfd,eky;
	int ret,noc,size;
	int index;
	unsigned char byt,ch,cc;
	Dscompress *a;
	DsUnique *d;

	printf("%s Begin\n", __func__);
	d = (DsUnique*)malloc(sizeof(DsUnique));
	a = (Dscompress*)arg;
	printf("TEST : %s\n", a->ma);
	noc = lseek(a->fd,0,SEEK_END);
	lseek(a->fd,0,SEEK_SET);
	d->ma = a->ma;
	printf("Give compressed file name\n");	
	cfd = *(int*)(*fptr[6])((void*)"creat|writing"); // openFile(); for compFile
	if(!cfd)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}
	printf("Give Encyption Key\n");	
	eky = *(int*)(*fptr[6])((void*)"creat|writing"); // openFile(); for encKey
	if(!eky)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}
	printf("ENC KEY MA : %s\n", a->ma);
	size = strlen(a->ma);
	ret = write(eky,a->ma,size);
	if(ret == -1)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}
	while(noc > 0)
	{
		byt ^= byt;			//byt = 0000 0000
		ret = read(a->fd,&d->ch,1);	// ch='i' 
		printf("%s : d->ch : %c\n", __func__,d->ch);

		if(ret == -1)
		{
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		else if(ret == 0)
			break;


		index = *(int*)(*fptr[16])((void*)d); // getIndex() // 00000004
		ch = (unsigned char)index;
		cc = ch;
		cc <<= 4; 	// To remove the garbage values from the binary code // 00040000
		byt |= cc; 	// byt -> 0000 0000 |= ch -> 0004 0000(For example) // byt -> 0004 0000
		noc--;
		if(noc == 0)    // Break the loop when the noc == 0
			break;
	// byt -> 0004 0000
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
		cc = ch;
		cc <<=4; 		   		// 0005 0000
		cc >>=4; 		   		// 0000 0005
		byt = byt | cc;		   		// 0004 0000 |= 0000 0005 -> 00040005
		noc--;
		printf("%s : N O C : %d\n",__func__, noc);
	//----------------------------------------------------------------------------------------------------
		printf("%s : d->ch : %c\n", __func__,d->ch);
//		(*fptr[23])((void*)&ch);		//printBits();
		ret = write(cfd,&byt,1); 		// Return number of bytes

		if(!ret)
		{
			perror("write");
			(*fptr[1])((void*)"failure");
		}
	}


	printf("%s End\n", __func__);





}
