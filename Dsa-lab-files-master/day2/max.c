#include<stdio.h>
int main()
{
	int n,si;
	printf("\nEnter the no of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max1=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max1)
		{ 
			max1=a[i];
			si=i;
			
		}
	}
	int max2=a[0];
	for(int i=0;i<n;i++)
	{
	   if(si==i)
	     continue;
		if(a[i]>max2)
		{ 
			max2=a[i];
		}
	}
	printf("\nThe sum of first 2 maximum elements is : %d",max1+max2);
	return 0;
}			
