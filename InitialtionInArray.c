#include<stdio.h>

int main(void)
{
    int marks[]={76,56,44,89,34};
    int i;
    for(i=0;i<5;i++)
    {
        printf("marks[%d]: ",i);
        printf("%d\t",marks[i]);
    }
    return 0;
}