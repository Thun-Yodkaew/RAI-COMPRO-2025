#include<stdio.h>

int main()
{
    int i, j, k, l;
    struct score{
        float sj1, sj2, sj3, sj4;
    };
    struct a{
        char name[20];
        int id;
        float as, sa;
        struct score sc;
    }s[3];

    for(i=0; i<=2; i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%s %d %f %f %f %f", &s[i].name, &s[i].id, &s[i].sc.sj1, &s[i].sc.sj2, &s[i].sc.sj3, &s[i].sc.sj4);
    }

    for (k=0; k<=2; k++){
        s[k].as = (s[k].sc.sj1+s[k].sc.sj2+s[k].sc.sj3+s[k].sc.sj4)/4;
    }

    printf("Student Average\n");
    for(j=0; j<= 2; j++){
        printf("%s (ID: %d): %.2f\n", s[j].name, s[j].id, s[j].as);
    }
    if (s[0].as > s[1].as  && s[0].as > s[2].as){
        printf("Top Student: %s with %.2f\n", s[0].name, s[0].as);
    } else {
        if(s[1].as > s[0].as  && s[1].as > s[2].as){
            printf("Top Student: %s with %.2f\n", s[1].name, s[1].as);
    }   else{
            if(s[2].as > s[0].as  && s[2].as > s[1].as){
                printf("Top Student: %s with %.2f\n", s[2].name, s[2].as);
        }
    }
    }
    float ma =  (s[0].sc.sj1+s[1].sc.sj1+s[2].sc.sj1)/3;
    float ea = (s[0].sc.sj2+s[1].sc.sj2+s[2].sc.sj2)/3;
    float sa = (s[0].sc.sj3+s[1].sc.sj3+s[2].sc.sj3)/3;
    float ha = (s[0].sc.sj4+s[1].sc.sj4+s[2].sc.sj4)/3;
    printf("Subject Average\n");
    printf("Math: %.2f\n", ma);
    printf("English: %.2f\n", ea);
    printf("Science: %.2f\n", sa);
    printf("History: %.2f\n", ha);

    return 0;
}