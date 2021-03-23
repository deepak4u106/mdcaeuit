#include"header.h"
#include"declaration.h"

void* mainMenu(void* arg){
	printf("%s : Begin\n",__func__);
	int a;
	printf("1: Compress the file\n");
	printf("2: Stats of compreesed file\n");
	printf("3: Decompression the file\n");
	printf("4: Stats of decompressed file\n");
	printf("0: EXIT\n");
	printf("Enter the choice\n");
	scanf("%d", &a);
	getchar();
	if(a == 0){
		(*fptr[a + 1])((void*)"Success"); //Exit Funciton
		}
	else if(a >= 1 && a <= 9){
		(*fptr[a + 1])(0);		// All functions

		}
//	getchar();
	printf("%s : End\n",__func__);

	return 0;



}
