#include<stdio.h>

int main(void)
{
    int marks[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter the value for marks[%d]: ",i);
        scanf("%d",&marks[i]);
        printf("\n");
    }
    printf("The array elements are: ");
    for(i=0;i<5;i++)
    printf("\t%d",marks[i]);
    printf("\n");
    return 0;
}