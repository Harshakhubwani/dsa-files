#include<stdio.h>
int main()
{
	int n,i,j,flag;
	printf("\nEnter the no of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   for(j=i;j<n;j++)
	   {
	      flag=0;
	      if(a[j]>a[i])
	      {
	         printf("\n%d %d",a[i],a[j]);
	         flag=1;
	         break;
	      }
	  }
	  if(flag!=1)
	  {
	     printf("\n%d %d",a[i],-1);
	  }
	}
	return 0;
}
	            
