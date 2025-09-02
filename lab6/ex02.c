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

    if (s[0].score > s[1].score  && s[0].score > s[2].score){
        printf("The highest score belong to %s %s at %.1f", s[0].name, s[0].surname, s[0].score );
    } else {
        if(s[1].score > s[0].score  && s[1].score > s[2].score){
            printf("The highest score belong to %s %s at %.1f", s[1].name, s[1].surname, s[1].score );
    }   else{
            if(s[2].score > s[0].score  && s[2].score > s[1].score){
                printf("The highest score belong to %s %s at %.1f", s[2].name, s[2].surname, s[2].score );
        }
    }

    }

    return 0;
}