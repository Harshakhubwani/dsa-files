#include<stdio.h>
int main()
{
	int m,n,i,j,c=0;
	printf("\nEnter the no of rows and coloumns : ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=0)
				c++; 

	int sa[c+1][3];
	sa[0][0]=m;			
	sa[0][1]=n;
	sa[0][2]=c;
	int k=0;
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=0)
			{
				k++;
				sa[k][0]=i;
				sa[k][1]=j;
				sa[k][2]=a[i][j];
			} 
  
	k=1;
	int t[c+1][3];
	for(j=0;j<n;j++)
		for(i=1;i<=c;i++)
			if(sa[i][1]==j)
			{
				t[k][0]=sa[i][1];
				t[k][1]=sa[i][0];
				t[k][2]=sa[i][2];
				k++;
			}
	k=1;
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			if(i==t[k][0] && j==t[k][1] && k<=c)
			{
				printf("%d ",t[k][2]);
				k++;
			}
			else
			{
				printf("%d ",0);
			}
	}
	return 0;
}
			
							
