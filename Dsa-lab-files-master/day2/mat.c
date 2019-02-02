#include<stdio.h>
int main()
{
	int n,i,j,flag,c=0,add=0,mult=1;
	printf("\nEnter the no of rows or coloumns : ");
	scanf("%d",&n);
	int a[n][n];
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	      scanf("%d",&a[i][j]);
	   }
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
	   for(j=0;j<n;j++)
	   {
			printf("%d ",a[i][j]);
	   }
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	      if(a[i][j]!=0)
	         c++;
	   }     
	}
	printf("\nNumber of non zero elements = %d",c);
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	if(j>=i)
	   	   add+=a[i][j];
	   }
	}
	printf("\nThe sum of elements above leading diagonal = %d",add);
	printf("\nThe sum of elements below minor diagonal =\n");	
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	if(i+j>=n)
	   	   printf("%d ",a[i][j]);
	   }
	}
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	if(i==j)
	   	    mult*=a[i][j];
	   }
	}   	    	      	      
	printf("\nThe product of elements of leading diagonal = %d",mult);
	return 0;
}		
