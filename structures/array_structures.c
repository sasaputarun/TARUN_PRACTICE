#include<stdio.h>
struct employee
{
	char name[30];
	int idno;
	float rating;
};
int main()
{
	struct employee E[4];
	printf("entering employees \n");
	for(int i=0;i<4;i++)
        {
		printf("employee %d:",i+1);
                scanf("%s %d %f",E[i].name,&E[i].idno,&E[i].rating);
        }
	printf("accessing employee detials\n");

	for(int i=0;i<4;i++)
        {
                printf("%s %d %f\n",E[i].name,E[i].idno,E[i].rating);
        }
	return 0;
}



		

	
