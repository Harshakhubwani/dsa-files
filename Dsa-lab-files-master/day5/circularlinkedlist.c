#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}node;
node *front=NULL,*rear=NULL,*temp;	
void create_end()
{
	node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value of the node : ");
	scanf("%d",&newnode->info);
	newnode->next=NULL;
	if(rear==NULL)
		front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	rear->next=front;
}

void create_start()
{
	node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value of the node : ");
	scanf("%d",&newnode->info);
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		newnode->next=front;
		front=newnode;
	}			
}	

void delete_start()
{
	temp=front;
	if(front==NULL)
		printf("\nUnderflow!!");
	else
	{
		if(front==rear)
			printf("\n%d",front->info);
		else
		{
			printf("\n%d",front->info);
			front=front->next;
			rear->next=front;
		}
		temp->next=NULL;
		free(temp);
	}
}

void delete_end()
{	
	if(front==NULL)
		printf("Underflow!!");
	else
	{	
		temp=front->next;
		while(temp->next!=rear)
			temp=temp->next;
		rear=temp;	
		temp=temp->next;
		printf("\n%d",temp->info);
		rear->next=front;
		free(temp);
	}	
}		

void display()
{
	temp=front;
	if(front==NULL)
		printf("\nEmpty!!");
	else
	{
		printf("\n");
		do
		{
			printf("%d ",temp->info);
			temp=temp->next;
		}while(temp!=front);	
	}
}

int main()
{
	int ch;
	do
	{
		printf("\n1: Create a element at the start: ");
		printf("\n2: Create a element at the end: ");		
		printf("\n3: Delete a element at the start: ");	
		printf("\n4: Delete a element at the end: ");			
		printf("\n5: Display all elements : ");	
		printf("\n6: Quit");													
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create_start();
				break;
			case 2:
				create_end();
				break;	
			case 3:
				delete_start();
				break;
			case 4:
				delete_end();
				break;	
			case 5:
				display();
				break;
			case 6:
				break;
			default:
				printf("\nWrong Choice!!");
		}
	}while(ch!=6);
	return 0;
}
										
