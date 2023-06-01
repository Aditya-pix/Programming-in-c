#include<stdio.h>
void change(int ar[3][3] ,int n)
{
	int i,j,temp1,temp2;
	for(i=0;i<(n/2);i++)
	{
		for(j=0;j<n;j++)
		{
		temp1=ar[i][j];
		temp2=ar[n-1-i][j];
		ar[i][j]=temp2;
		ar[n-1-i][j]=temp1;
		}
	}
}
void trans(int ar[3][3],int n)
{
	int i,j,a,b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		a=ar[i][j];
		b=ar[j][i];
		ar[j][i]=a;
		ar[i][j]=b;
	    }
	}
	change(ar,n);
}
int main()
{
	int n;
	printf("Enter order of matrix\n");
	scanf("%d",&n);
	int ar[n][n];
	int i,j;
	printf("Enter array element\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&ar[i][j]);
		}
	}
	trans(ar,n);
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",ar[i][j]);
		printf("\n");
	}
}