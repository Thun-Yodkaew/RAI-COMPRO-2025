#include<stdio.h>


void sum(int *a, int n, int *evensum, int *oddsum){
    int i, even = 0, odd = 0;

    for(i = 0; i < n; i++){
        if(*a % 2 == 0){
            *evensum += *a;
        }else{
            *oddsum += *a;
        }
        a += 1;
    }


}


int main()
{   
    int i, N;

    printf("N: ");
    scanf("%d", &N);

    int num[N];
    for(i = 0; i < N; i++){
        printf("input: ");
        scanf("%d", &num[i]);
    }

    int esum = 0, osum = 0;

    sum(num, N, &esum, &osum);

    printf("Output: Sum of even number: %d\n", esum);
    printf("        Sum of odd number: %d\n", osum);


    
    

    return 0;
}