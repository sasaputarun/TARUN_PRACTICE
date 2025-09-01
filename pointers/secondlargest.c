#include<stdio.h>
int main()
{
        int n,i,j;
        printf("enter array size:");
        scanf("%d",&n);
        int arr[n];
        int *ptr=arr;
        printf("enter array elements:");
        for(int i=0;i<n;i++)
        {
                scanf("%d",(ptr+i));
        }
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(*(ptr+i)>*(ptr+j))
                        {
                                int temp=*(ptr+i);
                                *(ptr+i)=*(ptr+j);
                                *(ptr+j)=temp;
                        }
                }
        }
        for(i=0;i<n;i++)
        {
                printf("%d ",*(ptr+i));
	}
	printf("\n");
	printf("%d\n",*(ptr+(n-2)));
        return 0;
}
