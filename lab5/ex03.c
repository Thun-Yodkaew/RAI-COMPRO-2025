#include<stdio.h>

int main()
{   
    int student[5], i, total = 0, temp;

    for(i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &student[i]);
        total += student[i];
    }

    for(i = 0; i < 4; i++)
    {
        if(student[i] > student[i+1]){
            temp = student[i];
            student[i] = student[i+1];
            student[i+1] = temp;
        }
    }

    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d", student[4]);

    return 0;
}