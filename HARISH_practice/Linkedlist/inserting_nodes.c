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
void insert_at_begin()
{
	temp=malloc(sizeof(struct node));
	temp->data=38;
	temp->link=NULL;
	temp->link=head;
	head=temp;
}
void insert_at_pos(int pos)
{
	ptr=head;
	temp=malloc(sizeof(struct node));
	temp->data=99;
	temp->link=NULL;
	while(pos-2)
	{
		ptr=ptr->link;
		pos--;
	}
	temp->link=ptr->link;
	ptr->link=temp;
}
void insert_at_end()
{
	temp=malloc(sizeof(struct node));
	temp->data=666;
	temp->link=NULL;
	tail->link=temp;
	tail=temp;
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
	insert_at_begin();
	display();
	int pos ;
	printf("enter pos:");
	scanf("%d",&pos);
	insert_at_pos(pos);
	display();
	insert_at_end();
	display();

}
