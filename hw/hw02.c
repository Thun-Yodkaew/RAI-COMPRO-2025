#include<stdio.h>
int main()
{
    float x, y, temp;
    float *ptr_x = &x;
    float *ptr_y = &y;
    
    printf("Enter X: ");
    scanf("%f", &x);
    printf("Enter Y: ");
    scanf("%f", &y);

    temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;

    printf("X: %.2f \nY: %.2f", x, y);


    return 0;
}