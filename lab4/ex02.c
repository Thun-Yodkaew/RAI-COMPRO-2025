#include<stdio.h>

int main()
{
    int i = 0, final = 10, sum = 0, num;

    while (i<10)
    {
        printf("enter the number ");
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }

    printf("total sum is %d", sum);
    return 0;
}