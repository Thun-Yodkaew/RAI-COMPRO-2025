#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >=0 && num<=100){

        if(num % 2 == 0){
            printf("%d is even", num);
        }else{
            printf("%d is odd", num);
        }
    }else{
        printf("%d is out of range", num);
    }

    return 0;
}