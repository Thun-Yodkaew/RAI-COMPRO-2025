#include<stdio.h>

int main()
{

int test = 0;
int *ptr_test = &test;
printf("the address of test variable is at: %p", ptr_test);

    return 0;
}