#include<stdio.h>
#include <math.h>

int main()
{
    struct a{
        float x, y;
    }cor[2];

    printf("u_x: ");
    scanf("%f", &cor[0].x);
    printf("u_y: ");
    scanf("%f", &cor[0].y);

    printf("v_x: ");
    scanf("%f", &cor[1].x);
    printf("v_y: ");
    scanf("%f", &cor[1].y);

    printf("Resulant vector is equvalence to %.1fi + %.1fj", cor[0].x + cor[1].x, cor[0].y + cor[1].y);
    return 0;
}