#include<stdio.h>


float Cir(float r){
    return 2 * 3.14 * r;
}

float Area(float r){
    return 3.14*r*r;
}

int main()
{   
    float radius;

    printf("Enter the readius in cm: ");
    scanf("%f", &radius);

    printf("Circumference: %.2f\n", Cir(radius));
    printf("Area: %.2f", Area(radius));

    return 0;
}