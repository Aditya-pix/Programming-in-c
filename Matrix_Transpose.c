#include<stdio.h>
int main()
{
	int m,n,i,j;
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
	// transpose
	int transpose[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("Transpose of above matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}