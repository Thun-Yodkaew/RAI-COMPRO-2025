#include<stdio.h>

int main()
{   
    int num[10], i, even = 0, odd = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(num[i]%2 == 0){
            even += 1;
        } else {
            odd += 1;
        }
    }
    printf("Even number: %d\n", even);
    printf("Odd numbers: %d", odd);


    return 0;
}