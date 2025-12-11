#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void counting_nodes(struct node*);

int main() {
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 4;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 5;
    current->link = NULL;
    head->link = current;

    struct node *current1 = malloc(sizeof(struct node));
    current1->data = 8;
    current1->link = NULL;
    current->link = current1;

    counting_nodes(head);
}

void counting_nodes(struct node *head) {
    int count = 0;
    struct node *ptr = head;

    if (head == NULL) {
        printf("Linked list is empty\n");
    }

        while (ptr != NULL)
	{
		count++;
            printf("%d\n",ptr->data);
            ptr = ptr->link;
        }
	printf("no of nodes:%d\n",count);
       
    
}

