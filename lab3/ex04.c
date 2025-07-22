#include<stdio.h>

int main()
{
    char name[30];
    float cal, phy,sci, grade;

    printf("Enter a name: ");
    scanf("%s", name);

    printf("Enter your Calculus score:");
    scanf("%f", &cal);
    printf("Enter your Physic score:");
    scanf("%f", &phy);
    printf("Enter your Science score:");
    scanf("%f", &sci);

    grade = (sci+phy+cal)/3;

    if (grade >= 80){
        printf("%s, your average is %.2f. you got grade A." ,name, grade);
    }else{
        if (grade >= 70 && grade <80){
            printf("%s, your average is %.2f. you got grade B." ,name, grade);
        }else{
            if (grade >= 60 && grade <70){
                printf("%s, your average is %.2f. you got grade C." ,name, grade);
            }else{
                if (grade >= 50 && grade <60){
                    printf("%s, your average is %.2f. you got grade D." ,name, grade);
                }else{
                    if (grade < 50){
                        printf("%s, your average is %.2f. you got grade F." ,name, grade);
                        }
                }
            }
         }
    }

    return 0;
}