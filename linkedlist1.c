#include<stdio.h>
#include<stdlib.h>

//Insert in between.

struct Node {	
	int data;
	struct Node *next;
};

typedef struct Node node;

node *head = NULL;

node *createNode()
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	return temp;
}

insert_front(int x)
{
	node *p=createNode();
	p->data=x;
	if(head==NULL)
		head=p;
	else
	{
		p->next=head;
		head=p;
	}
}

insert_rear(int x)
{
	node *p=createNode();
	node *temp=createNode();
	temp->data=x;
	while(p->next!=NULL)
		p->next=p;
	p->next=temp;
	temp->next=NULL;
}

insert_mid(int x)
{
	node *p=createNode();
	node *a=createNode();
	node *start=head;
	p->data=x;
	while(x>=start->data)
	{
		a=start;
		start->next=start;
	}
	a->next=p;
	p->next=start;
}

display()
{
	node *p=head;
//	p=head;
	while(p!=NULL)
	{
		printf("%d\t", p);
		p->next=p;
	}
}

int main()
{
	int option;
	printf("1.Insert front\n2.Insert rear\n3.Insert middle\n4.Display\n5.Exit\n");
	while(1)
	{
		int option, ele;
		printf("Enter your choice:");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("\nEnter the Number:");
				scanf("%d", &ele);
				insert_front(ele);
				break;
			case 2:
				printf("\nEnter the Number:");
				scanf("%d", &ele);
				insert_rear(ele);
				break;
			case 3:
				printf("\nEnter the Number:");
				scanf("%d", &ele);
				insert_mid(ele);
				break;
			case 4:
				printf("\nThe list: ");
				display();
				break;
			case 5:
				break;
		}		
	}
	return 0;	
}
