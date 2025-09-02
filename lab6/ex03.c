#include<stdio.h>
#include <math.h>

int main()
{
    struct a{
        float x, y;
    }cor[2];

    int i;
    float a, b, c, d, e, f ;

    for(i=1; i<=2; i++){
        printf("x%d: ", i);
        scanf("%f", &cor[i-1].x);
        printf("y%d: ", i);
        scanf("%f", &cor[i-1].y);
    }

    a = cor[1].x - cor[0].x;
    b = cor[1].y - cor[0].y;
    c = pow(a, 2.0);
    d = pow(b, 2.0);
    e = d + c;
    f = sqrt(e);

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)", cor[0].x, cor[0].y, cor[1].x, cor[1].y, f);
    return 0;
}