#include<stdio.h>
#include<math.h>
#include<ctype.h>
int stack[50];
int top=-1;
void push(double x)
{
	stack[++top]=x;
}
double pop()
{
	return stack[top--];
}
int main()
{
 	char exp[50];
 	char *e;
 	double n1,n2,n3,num;
 	printf("\nEnter the expression : ");
 	scanf("%s",exp);
 	e=exp;
 	while(*e!='\0')
 	{
 		if(isdigit(*e))
 		{
 			num=*e-48;
 			push(num);
 		}
 		else
 		{
 			n1=pop();
 			n2=pop();
 			switch(*e)
 			{
 				case '+': n3=n1+n2;break;
 				case '-': n3=n2-n1;break; 				
 				case '*': n3=n1*n2;break; 				
 				case '/': n3=n2/n1;break; 				
 				case '^': n3=pow(n1,n2);break; 	
 			}
 			push(n3);
 		}
 		e++;
 	}
 	printf("\nThe result is %s = %f",exp,pop());
 	return 0;
}	 							
