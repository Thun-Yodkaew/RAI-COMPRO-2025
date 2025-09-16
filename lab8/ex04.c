#include<stdio.h>
#include <string.h>
#include <ctype.h>

int Count(char a[40]){
    int i = strlen(a), j, c = 0;
    char b[40];
    for (j = 0; j < i; j++){
        b[j] = tolower(a[j]);
        if(b[j] == 'a' || b[j] == 'e'|| b[j] == 'i'|| b[j] == 'o'|| b[j] == 'u'){
            c += 1;
        }
    }
    return c;
}


int main()
{   
    char st[40];

    printf("Input: ");
    fgets(st, sizeof(st), stdin);

    printf("Output: Number of vowels: %d", Count(st));

    return 0;
}