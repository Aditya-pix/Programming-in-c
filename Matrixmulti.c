#include<stdio.h>
int main()
{
	int m,n,p,q,i,j,sum=0,k;
	printf("Enter order(m,n) of matrix first: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter element of first matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter order(p,q) of matrix second: ");
	scanf("%d%d",&p,&q);
	printf("Enter element of second matrix:\n");
	int b[p][q];
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	// Matrix multiplication
	int multi[m][q];
	if(m==q)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<p;k++)
				{
					sum+=a[i][k]*b[k][j];
				}
					multi[i][j]=sum;
					sum=0;
			}
		}
			printf("product of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
		  printf("%d\t",multi[i][j]);
		 
	    }
	     printf("\n");
	}
	}
	else
		printf("Matrix multiplication not possible.");
	return 0;
}