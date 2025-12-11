#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL,*tail=NULL,*temp=NULL,*ptr=NULL;
void create_node(int data)
{
	temp=malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	if(head==NULL)
	{
		head=tail=temp;
	}
	tail->link=temp;
	tail=temp;
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
void insert_at_end()
{
	temp=malloc(sizeof(struct node));
	temp->data=50;
	temp->link=NULL;
	tail->link=temp;
	tail=temp;
}
void insert_at_pos(int pos)
{
	ptr=head;
	temp=malloc(sizeof(struct node));
	temp->data=25;
	temp->link=NULL;
	while(pos-2)
	{
		ptr=ptr->link;
		pos--;
	}
	temp->link=ptr->link;
	ptr->link=temp;
}
	

void insert_at_begin()
{
	temp=malloc(sizeof(struct node));
	temp->data=5;
	temp->link=head;
	head=temp;
}
int main()
{
	while(1)
	{
		int n;
		printf("enter data:\n");
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
	insert_at_end();
	display();
	int pos;
	printf("enter pos:\n");
	scanf("%d",&pos);
	insert_at_pos(pos);
	display();
	return 0;

}

