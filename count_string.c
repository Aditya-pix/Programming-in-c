#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char *str;//={"Hello how are you"};
	gets(str);
	int count=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '|| str[i]=='\t'||str[i]=='\n')
		{
			count++;
		}
	}
	printf("Number of words: %d",count);
	return 0;
}