#include<stdio.h>
int main()
{
    struct S{
        int num1, num2, sum;
    }s;
    int *ptr_num1 = &s.num1;
    int *ptr_num2 = &s.num2;
    int *ptr_sum = &s.sum;


    printf("Enter num1: ");
    scanf("%d", ptr_num1);

    printf("Enter num1: ");
    scanf("%d", ptr_num2);

    *ptr_sum = *ptr_num1 + *ptr_num2;

    printf("num1 is %d\nnum2 is %d\nsum is %d", *ptr_num1, *ptr_num2, *ptr_sum);

    return 0;
}