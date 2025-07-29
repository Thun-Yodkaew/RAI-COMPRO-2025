#include<stdio.h>

int main()
{
    int num;

    do
    {
        printf("Enter the number ");
        scanf("%d", &num);

        if (num % 2 == 0 && num != 0){
            printf("%d is even\n", num);
        }else{
            if (num !=0){
                printf("%d is odd\n", num);
            }
        }
    }
    while(num != 0);
    printf("Exiting program...Bye");

    return 0;
}