#include<stdio.h>


int sqsum(int n1, int n2){
    return n1*n1+n2*n2;
}

int main()
{   
    int num1, num2, sum;

    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = sqsum(num1, num2);

    printf("Sum of squares of %d and %d is %d", num1, num2, sum);


    return 0;
}