#include<stdio.h>

int main(void)
{
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    return 0;
}