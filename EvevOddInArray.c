#include<stdio.h>

int main(void)
{
    int num[5];
    int i,even=0,odd=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the value for num[%d]: ",i);
        scanf("%d",&num[i]);
        if(num[i]%2==0)
            even++;
        else
            odd++;
            printf("\n");
    }
    printf("The array elements are: ");
    for(i=0;i<5;i++)
        printf("%d\t",num[i]);
        printf("\nEven=%d\tOdd=%d",even,odd);
        return 0;
}