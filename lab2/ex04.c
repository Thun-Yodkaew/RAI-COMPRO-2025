#include<stdio.h>

int main()
{
    int student_ID;
    float program, physics, cal, GPA;
    char name[30];

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &student_ID);
    printf("Enter your Programming score: ");
    scanf("%f", &program);
    printf("Enter your Physics score: ");
    scanf("%f", &physics);   
    printf("Enter your Calculas score: ");
    scanf("%f", &cal);

    GPA = (program+physics+cal)/3;

    printf("Hi %s(%d) Your GPA is %.2f\n", name, student_ID, GPA);

    return 0;
}