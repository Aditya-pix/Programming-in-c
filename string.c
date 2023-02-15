#include<stdio.h>

int main(void)
{
    int ch[7];
    scanf("%[^\n]%*c",ch);
    printf("%s",ch);
    return 0;
}