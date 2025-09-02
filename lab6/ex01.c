#include<stdio.h>

int main()
{
    struct std{
        char name[50], surname[50];
        int age;
        float score;
    }s[3];

    int i,j;

    for(i=1; i<=3; i++){
        printf("Student [%d]\'s name: ", i);
        scanf("%s %s", &s[i-1].name, &s[i-1].surname);
        printf("Student[%d]\'s age: ", i);
        scanf("%d", &s[i-1].age);
        printf("Student[%d] score: ", i);
        scanf("%f", &s[i-1].score);
    }

    for(j=1; j <=3; j++){
        printf("Student %d name is %s %s, age %d\n", j, s[j-1].name, s[j-1].surname, s[j-1].age);
    }

    return 0;
}