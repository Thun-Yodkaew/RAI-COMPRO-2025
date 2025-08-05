#include<stdio.h>

int main()
{   
    int num[8], i, temp;

    for(i = 0; i < 8; i++)
    {
        printf("Enter the Value %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 7; i++)
    {
        if(num[i] > num[i+1]){
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
        }
    }

    for(i = 7; i > 0; i--)
    {
        if(num[i] < num[i-1]){
            temp = num[i];
            num[i] = num[i-1];
            num[i-1] = temp;
        }
    }
    
    printf("Smallest number: %d\n", num[0]);
    printf("Largest number: %d", num[7]);

    return 0;
}