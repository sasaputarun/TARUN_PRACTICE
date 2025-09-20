#include<stdio.h>
	struct student
	{
		int rollno;
		char name[25];
		float marks;
	};
	int main()
	{
		struct student s={66,"tarun",80};
		struct student *ptr=&s;
		printf("accessing structure values using pointers\n");
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);//using array operator 
		printf("%d %s %f\n",(*ptr).rollno,(*ptr).name,(*ptr).marks);//using . operator
		return 0;
	}
