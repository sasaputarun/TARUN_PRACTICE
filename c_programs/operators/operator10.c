#include<stdio.h>
#include<math.h>
int main()
{
	float n1,n2,N;
	printf("enter two numbers");
	scanf("%f %f",&n1,&n2);
	printf("enter the precision value(N)");
	scanf("%f",&N);
	if(fabs(n1-n2)<N){
		printf("the numbers are equal within the precision");
	}
		else{
			printf("the numbers are not equal within the precision");
	}
	return 0;
}


