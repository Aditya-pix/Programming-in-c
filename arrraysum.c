#include<stdio.h>

int main(void)
{
    int arr[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the value for arr[%d]: ",i);
        scanf("%d",&arr[i]);
        printf("\n");
        sum+=arr[i];
    }
    printf("The array elements are: ");
    for(i=0;i<5;i++)
    printf("\t%d",arr[i]);
    printf("\nSum=%d",sum);
    return 0;
}