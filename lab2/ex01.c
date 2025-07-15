#include<stdio.h>

int main()
{
    int a;
    float b;
    char name[10];
    printf("Please enter an integer value:");
    scanf("%d", &a);
    printf("You entered %d", a);
    printf("\nPlease enter a float value:");
    scanf("%f", &b);
    printf("You entered %.2f", b);
    printf("\nPlease enter a character:");
    scanf("%s", name);
    printf("You entered %s", name);

    return 0;
}