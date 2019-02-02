#include<stdio.h>
#include<stdlib.h>
int n;
void display(int st[])
{
	for(int i=n;i>=0;i--)
		printf("%d<--",st[i]);
}

void pop(int st[])
{
	if(n==-1)
		printf("Underflow !!");
	else
		printf("\n%d",st[n--]);
}

void push(int st[])
{
	if(n==9)
		printf("\nStack overflow!!");
	else
	{	
		printf("\nEnter the data  :");
		scanf("%d",&st[++n]);	
	}
}

int main()
{
	int ch,stack[10];
	char c;
	printf("\nEnter the desired number of elements in the stack : ");
	scanf("%d",&n);
	--n;
	for(int i=0;i<=n;i++)
		scanf("%d",&stack[i]);
	do
	{	
		printf("\nmenu");
		printf("\n1: Push");
		printf("\n2: Pop");
		printf("\n3: Displqay");
		printf("\n3: Quit.");
		printf("\nEnter the choice : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			push(stack);
			display(stack);
		}
		else if(ch==2)
		{
			pop(stack);
			printf("\n");
			display(stack);
		
		}
		else if(ch==3)
			display(stack);
		else if(ch==4)
			exit(0);
		else
			printf("\nWrong choice !!");	
		printf("\nDo you want to continue ? ");
		scanf(" %c",&c);	
	}while(c=='y');
	return 0;		
}

	
