#include<stdio.h>

int main()
{
    int age;
    float height;
    char first[50], last[50], uni[30];

    printf("Enter your full name: ");
    scanf("%s %s", first, last);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your university name: ");
    scanf("%s", uni);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.", last[0], first, uni, age, height);
    return 0;
}