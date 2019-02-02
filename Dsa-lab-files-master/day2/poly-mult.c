#include<stdio.h>
int main()
{
	int n1,i,j;
	printf("\nEnter the highest exponent of 1st polynomial : ");
	scanf("%d",&n1);
	int a[n1+1];
	printf("\nEnter the coefficents in ascending order of exponents : ");
	for(int i=0;i<=n1;i++)
	{
		scanf("%d",&a[i]);
	}
	int n2;
	printf("\nEnter the highest exponent of 2nd polynomial : ");
	scanf("%d",&n2);
	int b[n2+1];
	printf("\nEnter the coefficents in ascending order of exponents : ");
	for(int i=0;i<=n2;i++)
	{
		scanf("%d",&b[i]);
	}
	int n3=n1+n2;
	
	int c[n3];
	for(i=0;i<=n3;i++)
	{
	   c[i]=0;
	}
	   
	for(i=0;i<=n1;i++)
	{
	 	for(j=0;j<=n2;j++)
	 	{
	 	   c[i+j]+=a[i]*b[j];
	 	}
	}
	printf("\nNew polynomial : ");
	for(int i=n3;i>=0;i--)
		   printf("%dx^%d+",c[i],i);
	return 0;
}	 	   
