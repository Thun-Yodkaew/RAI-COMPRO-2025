#include<stdio.h>

int main()
{
    int sum = 0, i;
    float average, num;

    for (i=0; i<=9; i++)
    {
        printf("enter the number ");
        scanf("%f", &num);
        sum = sum + num;
    }

    average = sum/10.00;

    printf("total sum is %d\n", sum);
    printf("average is %.2f", average);
    


    return 0;
}