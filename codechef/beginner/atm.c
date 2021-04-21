#include <stdio.h>

int main(void){

    int X;
    scanf("%d", &X);

    float bal;
    scanf("%f", &bal);

    if((X%5)!=0){
        printf("%.2f\n",bal);
        return 0;
    }

    else if(((float)X+0.50)>bal){
        printf("%.2f\n",bal);
        return 0;
    }
    
    else{
        bal -= ((float)X + 0.50);
        printf("%.2f\n",bal);
        return 0;
    }
}