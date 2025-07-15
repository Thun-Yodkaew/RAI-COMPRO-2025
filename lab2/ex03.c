#include<stdio.h>

int main()
{
    int age, weight;
    float height;
    char name[30], Education[30], gender[10];

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%d", &weight);   
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your Education Qualification: ");
    scanf("%s", Education);

    printf("Name: %s\t", name);
    printf("Age: %d\t", age);
    printf("Gender: %s\n", gender);
    printf("Height: %.1f\t", height);
    printf("Weight: %d\n", weight);
    printf("Education: %s\n", Education);
  
    return 0;
}