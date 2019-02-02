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
	int b[n];
	int l=0,k=n-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		   b[k]=a[i];
		   k--;
		}
		else
		{
			b[l]=a[i];
			l++;
		}   
	}	
	printf("\nThe sorted array is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}
	
