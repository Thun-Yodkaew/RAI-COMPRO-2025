#include<stdio.h>

int main()
{
int size;
int array[] = { 3, 1, 2, 4, 5, 6 };
int *ptr_a = array;
int sum = 0;

for(size = 0; size <= 5; size++){
    sum += *ptr_a;
    ptr_a++;
}

printf("The sum of array is : %d", sum);

    return 0;
}