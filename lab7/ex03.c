#include<stdio.h>

int main()
{
int array[] = { 3, 1, 2, 4, 5, 6 };
int i;
int *ptr_a = array;
int max = *ptr_a;
for(i=0;i<5;i++){
    ptr_a++;
    if(*ptr_a > max){
        max = *ptr_a;
    }
}

printf("max value:%d", max);
    return 0;
}