#include<stdio.h>
int main()
{
	int i,count=0;
	char *str;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("String length=%d",count);
	return 0;
}