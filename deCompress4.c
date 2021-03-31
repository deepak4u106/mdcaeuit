#include"header.h"
#include"declaration.h"

void* deCompress4(void* arg)
{
	int cfd,eky,i,l,len,FD,ret,noc;
	char *ma,DC;
	unsigned char cc,ch;
	printf("%s Begin\n",__func__);
	
//	DC = (char*)malloc(sizeof(char)*44);
	ma = (char*)arg;
	len = strlen(ma);
	//Open the compressed file

	printf("Open the compFile\n");
	cfd = *(int*)(*fptr[6])((void*)"reading"); //openFile();
	if(!cfd)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}

	noc = lseek(cfd,0,SEEK_END);
	lseek(cfd,0,SEEK_SET);
	printf("N O C : %d\n", noc);
	printf("Open the encKey\n");
	eky = *(int*)(*fptr[6])((void*)"reading");
	if(!eky)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}
	printf("Give name of FINAL FILE\n");
	FD = *(int*)(*fptr[6])((void*)"creat|writing");
	if(!FD)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}
	

	
	while(noc >= 0)
	{
		ret = read(cfd,&ch,1);		
		if(ret == -1)
		{
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		else if(ret == 0)
			break;
		cc = ch;
//		printf("%s CH : %c\n", __func__,ch);
		cc >>= 4;
		i = (int)cc; // index
		DC = *(ma + i);
		ret = write(FD,&DC,1);
//		ret = read(cfd,&ch,1);

		if(ret == -1)
		{
			perror("read");
			(*fptr[1])((void*)"failure");
		}
		else if(ret == 0)
			break;
		cc = ch;
		cc <<= 4;
		cc >>=4;

		i = (int)cc;
//		printf("%s I : %d\nCH : %c\n", __func__,i,ch);

		DC = *(ma + i);
		ret = write(FD,&DC,1);
		noc--;
//		if(noc == 0)
//			break;

	}
	printf("%s MA : %s\n", __func__,ma);
	printf("%s DC : %c\n", __func__,DC);
	len = strlen(ma);
	close(cfd);	
	close(eky);	
	close(FD);	
	printf("%s End\n",__func__);

}    
