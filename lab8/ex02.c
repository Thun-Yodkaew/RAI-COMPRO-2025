#include<stdio.h>
#include<math.h>

void pcheck(int st, int e){
    int i, j, check;
    for (i = st; i <= e; i++){
        int lim = sqrt(i);
        if(i > 1 && i<=3) check = 1;
        else{
        for(j = 2; j <= lim; j+=1){
            if(i % j == 0){ 
                check = 0;
                break;
                }else{
                    check = 1;
                }
            }
        if(check != 0){
            printf("%d ", i);
        }
        
    }
    }
    

}

int main()
{   
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    pcheck(start, end);



    return 0;
}