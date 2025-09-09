#include<stdio.h>

int main()
{

int a = 0, b = 5, c;
int *ptr_a = &a;
int *ptr_b = &b;
printf("Before reverse: a = %d, b = %d\n", a, b);
c = *ptr_b;
*ptr_b = a;
*ptr_a = c;
printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}