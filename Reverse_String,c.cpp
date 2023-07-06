#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,j=0;
	char str[100];
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}