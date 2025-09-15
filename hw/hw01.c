#include<stdio.h>
int main()
{
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, i;
    int *ptr_A = &A[0][0];
    for (i = 0; i < 9; i++){
        printf("%d\n", *ptr_A);
        ptr_A++;
    }

    return 0;
}