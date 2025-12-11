#include<stdio.h>
struct point
{
	char name[30];
	int id;
	int salary;
};
void display(struct point *ptr)
{
	printf("name:%s id:%d salary:%d\n",ptr->name,ptr->id,ptr->salary);
}
int main()
{
	struct point s;
	printf("enter employe details name id salary:\n");
	scanf("%s %d %d",s.name,&s.id,&s.salary);       
       display(&s);
       return 0;
}

