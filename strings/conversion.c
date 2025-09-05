#include<stdio.h>
int main()
{
        int n;
        printf("enter the character array size:");
        scanf("%d",&n);
        while(getchar() !='\n');
        char str[n];
        printf("enter the string");
        fgets(str,n,stdin);
        for(int i=0;str[i]!='\0';i++)
        {
                if(str[i]>='A'&&str[i]<='z')
                {
                        str[i]=str[i]+32;
                }
        }
        printf("%s",str);
        return 0;
}

