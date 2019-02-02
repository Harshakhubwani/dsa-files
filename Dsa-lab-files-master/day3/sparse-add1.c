#include<stdio.h>
int main()
{
	int m,n,i,j,c1=0,c2=0;
	printf("\nEnter the no of rows and coloumns : ");
	scanf("%d%d",&m,&n);
	/*printf("\nEnter the no of non zero elements : ");
	scanf("%d",&c1);*/
	int a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=0)
				c1++; 
	int sp1[c1+1][3];						
	int kk=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=0)
			{
				kk++;
				sp1[kk][0]=i;
				sp1[kk][1]=j;
				sp1[kk][2]=a[i][j];
			} 
	
	
	sp1[0][0]=m;			
	sp1[0][1]=n;
	sp1[0][2]=c1;
	/*for(i=1;i<=c1;i++)
	{
	   printf("Enter the position and element : ");
	   scanf("%d%d%d",&sp1[i][0],&sp1[i][1],&sp1[i][2]);
	} */
	
	
	printf("\nFor 2nd matrix : ");
	/*printf("\nEnter the no of non zero elements : ");
	scanf("%d",&c2);			
	
	
	int sp2[c2+1][3];
	sp2[0][0]=m;			
	sp2[0][1]=n;
	sp2[0][2]=c2;
	for(i=1;i<=c2;i++)
	{
	   printf("Enter the position and element : ");
	   scanf("%d%d%d",&sp2[i][0],&sp2[i][1],&sp2[i][2]);
	} */
	
	int b[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(b[i][j]!=0)
				c2++; 	
	int sp2[c2+1][3];
	kk=0;	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(b[i][j]!=0)
			{
				kk++;
				sp2[kk][0]=i;
				sp2[kk][1]=j;
				sp2[kk][2]=b[i][j];
			} 
	
	sp2[0][0]=m;			
	sp2[0][1]=n;
	sp2[0][2]=c2;
	
	
	
	/**************************************/
	int c=0;
	int t1=sp1[0][2];
	int t2=sp2[0][2];
	if(sp1[0][2]>sp2[0][2])
		c=sp1[0][2];
	else
		c=sp2[0][2];
	
	int sp3[c+1][3];
			
	int k1=1,k2=1,k3=1;
	while(k1<=t1 && k2<=t2)
	{
		if(sp1[k1][0]<sp2[k2][0])
		{
			sp3[k3][0]=sp1[k1][0];
			sp3[k3][1]=sp1[k1][1];
			sp3[k3][2]=sp1[k1][2];
			k3++,k1++;
		}
		else if(sp1[k1][0]>sp2[k2][0])
		{
			sp3[k3][0]=sp2[k2][0];
			sp3[k3][1]=sp2[k2][1];
			sp3[k3][2]=sp2[k2][2];
			k3++,k2++;
		}	
		else if(sp1[k1][0]==sp2[k2][0])
		{
			if(sp1[k1][1]<sp2[k2][1])
			{
				sp3[k3][0]=sp1[k1][0];
				sp3[k3][1]=sp1[k1][1];
				sp3[k3][2]=sp1[k1][2];
				k3++,k1++;
			}
			else if(sp1[k1][1]>sp2[k2][1])
			{
				sp3[k3][0]=sp2[k2][0];
				sp3[k3][1]=sp2[k2][1];
				sp3[k3][2]=sp2[k2][2];
				k3++,k2++;
			}
			else if(sp1[k1][1]==sp2[k2][1])
			{
				sp3[k3][0]=sp1[k1][0];
				sp3[k3][1]=sp1[k1][1];
				sp3[k3][2]=sp1[k1][2]+sp2[k2][2];
				k3++,k2++,k1++;
			}
		}
	}
	sp3[0][0]=sp1[0][0];
	sp3[0][1]=sp1[0][1];
	sp3[0][2]=k3-1;

	
	while(k1<=t1)
	{
		sp3[k3][0]=sp1[k1][0];
			sp3[k3][1]=sp1[k1][1];
			sp3[k3][2]=sp1[k1][2];
			k3++,k1++;
	}
	while(k2<=t2)
	{
		sp3[k3][0]=sp2[k2][0];
			sp3[k3][1]=sp2[k2][1];
			sp3[k3][2]=sp2[k2][2];
			k3++,k2++;
	}
	
	int k=1;
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			if(i==sp3[k][0] && j==sp3[k][1] && k<=k3)
			{
				printf("%d ",sp3[k][2]);
				k++;
			}
			else
			{
				printf("%d ",0);
			}
	}
	return 0;
}
