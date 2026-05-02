#include<stdio.h>
#include<stdlib.h>
struct node 
{
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
void delete_at_begin()
{
	if(head==NULL)
	{
		printf("list is empty ");
		return;
	}
	ptr=head;
	head=head->link;
	if(head==NULL)
	{
		tail=NULL;
	}
	free(ptr);
}
	

void display()
{
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
void delete_at_end()
{
	if(head==NULL)
	{
		printf("list is empty");
		return;
	}
	ptr=head;
	if(ptr->link==NULL)
	{
		printf("list has only one node");
		free(ptr);
		tail=NULL;
		head=NULL;
		return;
	}
	while(ptr->link->link!=NULL)
	{
		ptr=ptr->link;
	}
	struct node *ptr1=ptr->link;
	ptr->link=NULL;
	tail=ptr;
	free(ptr1);
}
void delete_at_pos(int pos)
{
	temp=head;

	while(pos-2)
	{
		temp=temp->link;
		pos--;
	}
	ptr=temp->link;
	temp->link=temp->link->link;
	free(ptr);
}
int main()
{
	while(1)
	{
		int n;
		printf("enter data:");
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
	delete_at_begin();
	display();
	delete_at_end();
	display();
	int pos;
	printf("enter position to delete node");
	scanf("%d",&pos);
	delete_at_pos(pos);
	display();
	return 0;
}
