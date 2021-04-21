/***************************************************************

Algorithm for printing all boolean permutation for a given number of variables using recursion.

Algorithm boolperm(int n, int x)
{
    if(n == 1){
        if(x)
            print(True);
        else
            print(False);
    }
    else{
        if(x){
            print(True, );
            boolperm(n-1, 1);
            print(False, );
            boolperm(n-1, 0);
        }
        else{
            print(True, );
            boolperm(n-1, 1);
            print(False, );
            boolperm(n-1, 0);
        }

    }
}

*************************************************************************************************/


#include <stdio.h>

void boolperm(int, int);
int main(void){

    int n;
    printf("Enter number of variables: ");
    scanf("%d", &n);

    boolperm(n, 1);
    boolperm(n, 0);
    return 0;
}

void boolperm(int n, int x){
    if(n==1){
        if(x)
            printf("True. \n");
        else
            printf("False. \n");
    }
    else{
        if(x){
            printf("True, ");
            boolperm(n-1, 1);
            printf("True, ");
            boolperm(n-1, 0);
        }
        else{
            printf("False, ");
            boolperm(n-1, 1);
            printf("False, ");
            boolperm(n-1, 0);
        }
    }
}