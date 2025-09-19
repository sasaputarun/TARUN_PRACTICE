#include<stdio.h>
	struct student
	{
		int rollno;
		char name[25];
		float marks;
	};
	int main()
	{
		struct student s1={66,"tarun",80};
		printf("marks:%d\n",s1.rollno);
		printf("name:%s\n",s1.name);
		printf("marks:%f\n",s1.marks);
		return 0;
	}

