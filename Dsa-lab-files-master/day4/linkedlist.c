#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
}*start;	 

void create_new()
{
	struct node *newnode,*curr;
	curr=start;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the info of the node : ");
	scanf("%d",&newnode->info);
	newnode->next=NULL;
	curr->next=newnode;
	curr=curr->next;
}	
void insert_start()
{
	struct node *newnode;
	newnode=	(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the info of the new node : ");
	scanf("%d",&newnode->info);
	newnode->next=start;
	start=newnode;
}
	
void insert_new()
{
	printf("\nEnter the position where you want to insert a new node : ");
	int pos;
	scanf("%d",&pos);
	struct node *prev,*curr,*newnode;
	prev=curr=start;
	int i=1;
	while(curr!=NULL && i<pos)
	{
		prev=curr;
		curr=curr->next;
		i++;
	}
	if(curr)
	{
		newnode=	(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the info of the new node : ");
		scanf("%d",&newnode->info);
		prev->next=newnode;
		newnode->next=curr;
	}
	else
		printf("\nPosition not valid!!");	
}
	
void delete_start()
{
	struct node *temp;
	temp=start;
	start=start->next;
	free(temp);
}

void delete_mid()
{
	printf("\nEnter the position where you want to delete a node : ");
	int pos;
	scanf("%d",&pos);	
	int i=1;
	struct node *temp,*prev;
	prev=temp=start;
	while(temp!=NULL && i<pos)
	{
		prev=temp;
		temp=temp->next;
		i++;
	}
	if(temp)
	{
		prev->next=temp->next;
		free(temp);
	}
	else
		printf("\nPosition not valid!!");				
}	

void delete_end()
{
	struct node *temp,*prev;
	prev=temp=start;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
}

void display()	
{
	struct node *curr;
	curr=start;
	printf("\nThe list is : ");
	while(curr!=NULL)
	{
		printf("%d ",curr->info);
		curr=curr->next;
	}
}			

int main()
{
	struct node *newnode;
	printf("\nDo you want to create the first node ? ");
	char c;
	int choice=1;
	scanf("%c",&c);
	if(c=='y')
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the info of the node : ");
		scanf("%d",&newnode->info);
		newnode->next=NULL;
		start = newnode;
	}
	do
	{
		printf("\n1: Insert a new node at the end.");
		printf("\n2: Insert a new node at the start.");			
		printf("\n3: Insert a new node at a particular point.");	
		printf("\n4: Delete a node at the start.");		
		printf("\n5: Delete a node at a particular point.");
		printf("\n6: Delete a node at the end.");		
		printf("\n7: Display the full list.");
		printf("\n8: Quit.");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			   create_new();
				break;
			case 2:
				insert_start();
				break;
			case 3:
				insert_new();
				break;
			case 4:
				delete_start();
				break;
			case 5:
				delete_mid();
				break;
			case 6:
				delete_end();
				break;
			case 7:
				display();
				break;
			case 8:
				break;
			default:
				printf("\nWrong Choice!!");
		}
	}while(choice!=8);
	return 0;
}
										
