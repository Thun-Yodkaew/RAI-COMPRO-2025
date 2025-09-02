#include<stdio.h>
#include <math.h>

int main()
{
    int ts, i, j;
    struct a{
        int minute, second;
    }time[3];
    for(i=0; i<=2; i++){
        printf("Time input (m:s): ");
        scanf("%d:%d", &time[i].minute, &time[i].second);
    }

    ts = time[0].minute * 60 + time[0].second + time[1].minute * 60 + time[1].second + time[2].minute * 60 + time[2].second;
   
    printf("Total time elasped: %d second(s)", ts);
    return 0;
}