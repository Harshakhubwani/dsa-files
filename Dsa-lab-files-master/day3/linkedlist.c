#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};	
int main()
{
	struct node *start,*curr,*newnode;
	printf("\nDo you want to create the first node ? ");
	char c;
	scanf("%c",&c);
	if(c=='y')
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the info of the node : ");
		scanf("%d",&newnode->info);
		newnode->next=NULL;
		start=curr=newnode;
	}
	printf("\nDo you want to create a new node ? ");
	
	scanf(" %c",&c);	
	while(c=='y')
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the info of the node : ");
		scanf("%d",&newnode->info);
		newnode->next=NULL;
		curr->next=newnode;
		curr=curr->next;
		printf("\nDo you want to continue ? ");
		scanf(" %c",&c);
	}	
	curr=start;
	printf("\nThe list is : ");
	while(curr!=NULL)
	{
		printf("%d ",curr->info);
		curr=curr->next;
	}
	return 0;
}		
