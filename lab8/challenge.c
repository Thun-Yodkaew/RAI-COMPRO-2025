#include<stdio.h>

float avg_grade(int grade[20], int num){
    int i;
    float avg = 0;
    for(i = 0; i < num; i++){
        avg += grade[i];
    }
    return avg/num;
}

int high(int grade[20], int num){
    int i;
    int max = grade[0];
    for (i = 1; i < num; i++){
        if(grade[i] > max){
            max = grade[i];
        }
    }
    return max;
}

int low(int grade[20], int num){
    int i;
    int min = grade[0];
    for (i = 1; i < num; i++){
        if(grade[i] < min){
            min = grade[i];
        }
    }
    return min;
}

void pass(char name[20][20], int grade[20], int num){
    int i;
    for(i = 0; i < num; i++){
        if(grade[i] >= 60){
            printf("%s\n", name[i]);
        }
    }
}


int main()
{   
    int num_s, student_g[20], i;
    char student[20][20];

    printf("Enter number of students: ");
    scanf("%d", &num_s);

    for(i = 0; i < num_s; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", student[i]);

        printf("Enter grade of %s: ", student[i]);
        scanf("%d", &student_g[i]);
    }

    printf("--- Results ---\n");
    printf("Average grade: %f.2\n", avg_grade(student_g, num_s));
    printf("Highest grade: %d\n", high(student_g, num_s));
    printf("Lowest grade: %d\n", low(student_g, num_s));

    printf("Students who passed:\n");

    pass(student, student_g, num_s);


    return 0;
}