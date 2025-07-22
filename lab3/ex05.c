#include<stdio.h>

int main()
{
    int hight, base;
    float pi = 3.14;
    float volume;

    printf("Enter cone hight: ");
    scanf("%d", &hight);

    printf("Enter cone base radius:");
    scanf("%d", &base);

    volume = 0.3333333*pi*(base*base)*hight;
    
    if (volume > 260){
        printf("This cone is perfect for supun project");
    }else{
        printf("This cone is not fit for this project");
    }


    return 0;
}