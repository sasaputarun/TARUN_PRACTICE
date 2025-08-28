#include<stdio.h>
int main(){
        int i,j,temp,a[5]={21,33,9,4,6};
        printf("after sorting");
        for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                        if(a[i]>a[j]){
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }

                }
         
        }
	for(i = 0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	int max = a[4];
	for(i  = 4;i>=0;i--)
	{
		if(a[i] != max)
		{
			printf("2nd largest element is %d",a[i]);
			break;
		}
	}
	printf("\n");
        return 0;
}

