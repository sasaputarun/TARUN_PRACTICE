#include<stdio.h>
int main()
{
	unsigned char n=0x45;
	unsigned char res;
	res=(n&0xF0)>>4|(n&0x0F)<<4;
	printf("0x%X",res);
}
