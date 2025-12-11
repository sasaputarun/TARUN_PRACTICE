#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL,*tail=NULL,*temp=NULL,*ptr=NULL;
void create_node(int n)
{
	temp=malloc(sizeof(struct node));
	temp->data=n;
	temp->link=NULL;
	if(head==NULL)
	{

		head=tail=temp;
	}
	else
	{

		tail->link=temp;
		tail=temp;
	}


}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;

	}
	printf("\n");
}
int main()
{
	int n;
	while(1)
	{
		printf("enter a data:\n");
		scanf("%d",&n);

		if(n==-1)
		{
			break;
		}
		else 
		{
			create_node(n);
		}
	}
	display();

}
