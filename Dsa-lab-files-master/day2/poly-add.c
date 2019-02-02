#include<stdio.h>
int main()
{
	int n1;
	printf("\nEnter the highest exponent of 1st polynomial : ");
	scanf("%d",&n1);
	int a[++n1];
	printf("\nEnter the coefficents in ascending order of exponents : ");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	int n2;
	printf("\nEnter the highest exponent of 2nd polynomial : ");
	scanf("%d",&n2);
	int b[++n2];
	printf("\nEnter the coefficents in ascending order of exponents : ");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	int n3;
	if(n1>n2){
	  n3=n1;
	}  
	else{
	  n3=n2;
	}	
	int c[n3];
	int i;
	if(n1<n2)
	{
		for(i=0;i<n2;i++)
		   c[i]=b[i];
		for(i=0;i<n1;i++)   
		   c[i]+=a[i];
	}
	else
	{
		for(i=0;i<n1;i++)
		   c[i]=a[i];
		for(i=0;i<n2;i++)   
		   c[i]+=b[i];
	}	 
	printf("\nNew polynomial : ");
	for(int i=n3-1;i>=0;i--)
		   printf("%dx^%d+",c[i],i);
	return 0;
}
		     
