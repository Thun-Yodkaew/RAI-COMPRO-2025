#include<stdio.h>

int main()
{
    int i , num, fnum;

    printf("Enter a number ");
    scanf("%d", &num);
    fnum = num;

    for(i=fnum - 1; i >= 1; i--)
    {
        fnum = i * fnum;
    }

    printf("factorial of %d is %d", num, fnum);

    return 0;
}