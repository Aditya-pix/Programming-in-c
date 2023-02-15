#include<stdio.h>

int main(void)
{
    int n,bin,rem,sum,j=1,dec=0;
    printf("Enter a binary number:");
    scanf("%d",&n);
    bin=n;
    while(n>0)
    {
        rem=n%10;
        sum=j*rem;
        dec+=sum;
        j*=2;
        n/=10;
    }
    printf("Binary=%d\tDecimal=%d",bin,dec);
    return 0;
}