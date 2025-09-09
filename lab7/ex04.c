#include<stdio.h>

int main()
{
int size;
int array[] = { 3, 1, 2, 4, 5, 6 };
int *ptr_a = array;

for(size = 0; size <= 5; size++){
    printf("%d\n", *ptr_a);
    ptr_a++;
}

    return 0;
}