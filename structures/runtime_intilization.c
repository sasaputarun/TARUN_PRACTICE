#include<stdio.h>
	struct student
	{
		int rollno;
		char name[25];
		float marks;
	};
	int main()
	{
		struct student s1;
		printf("enter a information for s1");
		scanf("%d %f",&s1.rollno,&s1.marks);
		printf("%d   %f\n",s1.rollno,s1.marks);
	}

