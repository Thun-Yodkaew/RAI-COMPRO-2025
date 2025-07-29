#include<stdio.h>

int main()
{
    int i , num;

    printf("Enter a number ");
    scanf("%d", &num);
    printf("Multiplication number for %d:", num);

    for(i=1; i <= 12; i++)
    {
        printf("\n%d x %d = %d", num, i, num*i);
    }

    return 0;
}