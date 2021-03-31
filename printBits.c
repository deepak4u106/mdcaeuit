#include"header.h"
#include"declaration.h"

void* printBits(void* arg)
{
	unsigned char ch,cc;
        int i,j = 0;
	printf("%s : Begin \n", __func__);
        ch = ((unsigned char)arg);
	cc = ch ;

        for(i = 7 ;  i >= 0; i--)

        {
//              cc = ch ;
                cc <<= j;
                j++;
                cc >>= 7;
                printf("%d", (int)cc);

        }
                printf("\n%c\n", ch);

        printf("\n");
        printf("%s : End \n", __func__);

}
