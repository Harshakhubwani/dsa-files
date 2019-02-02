#include<stdio.h>
void main()
{
	int n,ch,stack[20];
	printf("enter the desired no. of elements in the stack");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&stack[i]);
	printf("menu");
	printf("1.push");
	printf("1.pop");
	printf("enter the choice");
	scanf("%d",&ch);
	if(ch==1)
	push(stack,n-1);
	display(stack,n-1);
	else if(ch==2)
	{
pop(stack,n-1);
display(stack,n-1);}
else
exit(0);
}
void display(int st[],top)
int i=0;
for(i=top;i>=0;i--)
printf("%d<--",st[i]);
}

