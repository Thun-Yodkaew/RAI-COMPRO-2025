#include<stdio.h>

int main()
{
    int num[5], i, temp, j;
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    int *ptr_num = num;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (*(ptr_num + j) > *(ptr_num + j + 1)) { 
                temp = *(ptr_num + j);
                *(ptr_num + j) = *(ptr_num + j + 1);
                *(ptr_num + j + 1) = temp;
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
    return 0;
}