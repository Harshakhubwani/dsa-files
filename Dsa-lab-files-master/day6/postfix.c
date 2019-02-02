#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
	char data;
	struct node *next;
}*top=NULL;
void push(char x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	if(top==NULL)
		newnode->next=NULL;
	else
		newnode->next=top;
	top=newnode;
}
char pop()
{
	if(top==NULL)
	{
		printf("\nUnderflow!!");
		return '\0';
	}
	else
	{	
		char x=top->data;
		struct node *temp;
		temp=top;
		top=top->next;
		free(temp);
		return x;
	}
}

int prec(char x)
{
	if(x=='(') return 0;
	else if(x=='+' || x=='-') return 1;
	else if(x=='/' || x=='*') return 2;
	else if(x=='^') return 3;
}
			
int main()
{
	char eq[15];
	printf("Enter your expression : ");
	gets(eq);
	push('(');
	for(int i=0;eq[i]!='\0';i++)
	{
		if(eq[i]=='('  )
			push(eq[i]);
		else if(isalpha(eq[i]))
			printf("%c",eq[i]);
		else if(eq[i]=='+' || eq[i]=='-' || eq[i]=='/' || eq[i]=='*' || eq[i]=='^' )
		{
			char x=pop();
			while(prec(x)>=prec(eq[i]))
			{
				printf("%c",x);
				x=pop();
			}
			push(x);
			push(eq[i]);	
		}
		else if(eq[i]==')')
		{
			char x =pop();
			while(x!='(')
			{
				printf("%c",x);
				x=pop();
			}
		}		
	}
	 char x=pop();
	while(x!='(')
			{
				printf("%c",x);
				x=pop();
			}
	return 0
}