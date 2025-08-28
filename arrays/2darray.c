#include<stdio.h>
int main(){
	int i,j,a[2][3],sum=0;
	printf("enter 2D array elements");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++){
				printf("%d\t",a[i][j]);
				sum =sum+a[i][j];
			}
			printf("\n");
		}
		printf("sum:%d\t",sum);
}

