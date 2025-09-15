#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
        char hex[20];
        int i,binary[64],decimal=0,power=0,len=0,j=0;
        printf("enter a hexadecimal number");
        scanf("%s",hex);
        len=strlen(hex);
        for(i=len-1;i>=0;i--)
        {
                char ch=hex[i];
                if(ch>='0'&&ch<='9')
                {
                        decimal+=(ch-'0')*pow(16,power);
                }
                else if(ch>='A'&&ch<='F')
                {
                        decimal+=(ch-'A'+10)*pow(16,power);
                }
                else if(ch>='a'&& ch<='f')
                {
                        decimal+=(ch-'a'+10)*pow(16,power);
                }

                else{
                        printf("invalid number");
                        return 1;
                }
                power++;


	}
	if(decimal==0)
	{
		printf("binary:0\n");
		return 0;
	}
	while(decimal>0)
	{
		binary[j]=decimal%2;
		decimal=decimal/2;
		j++;
	}
	printf("binary");
	for(int k=j-1;k>=0;k--)
		printf("%d",binary[k]);
	printf("\n");
	return 0;
}
