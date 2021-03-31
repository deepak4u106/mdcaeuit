#include<stdio.h>

int main(void* arg)
{

	unsigned char ch,cc;
	int i,j = 0;
	printf("%s : Begin \n", __func__);
	printf("Enter the char\n");
	scanf("%c", &ch);
	cc = ch ;

	for(i = 7 ;  i >= 0; i--)
	
	{
		cc = ch ;
		cc <<= j;
		j++;
		cc >>= 7;
		printf("%d", (int)cc);

	}
		printf("\n%c\n", ch);

	printf("\n");
	printf("%s : End \n", __func__);

}

