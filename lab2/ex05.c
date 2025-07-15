#include<stdio.h>

int main()
{
    int age;
    float height;
    char name[50], uni[30];

    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your university name: ");
    scanf("%s", uni);

    printf("Hi! Everyone. This is K.%s from %s. I am %d years old and my height is %.1f cm tall.", name, uni, age, height);
    return 0;
}