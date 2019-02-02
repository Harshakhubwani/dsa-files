#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the no of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l=0,k=n-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0 && i<n/2)
		{
		   int t=a[i];
		   a[i]=a[k];
		   a[k]=t;
		   k--;
		}
		if(a[i]%2==1)
		{
		   int t=a[i];
		   a[i]=a[l];
		   a[l]=t;
		   l++;
		}   
	}	
	printf("\nThe sorted array is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
	
