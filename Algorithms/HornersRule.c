/* Algorithm for Horner's Rule for evaluating polynomial of n-degree:
y = (((.......)*x + a2)*x + a1)*x + a0

For example : a0 = 1, a1 = 2, a2 = 3, a3 = 4;
x = 3

Polynomial expression : (((a3)*x +a2)*x +a1)*x + a0

Algorithm: HornersRule(n, x, count, arr){

    if(count==0){
        count++;
        return (HornersRule(n, x, count, arr) + arr[count-1]);
    }
    else if(count == n){
        return arr[count];
    }
    else{
        count++;
        return((HornersRule(n, x, count, arr)*x)+arr[count-1])
    }
}
*******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int HornersRule(int[], int, int, int);
int main(){

    int pol=0,x=0;
    int* arr;

    printf("Enter polynomial degree : ");
    scanf("%d", &pol);
    printf("Enter Value for x: ");
    scanf("%d", &x);

    printf("Enter coefficients for polynomial:\n");
    arr = (int*)malloc(sizeof(int)*(pol+1));

    for(int i=0; i<=pol; i++){
        printf("Value for a%d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\nCalculated Value using Horner's Rule is %d\n\n",HornersRule(arr, pol, x, 0));
    return 0;
}

int HornersRule(int arr[], int n, int x, int count){
    if(count!=n){
        count++;
        return ((HornersRule(arr, n, x, count)*x) + arr[count-1]);
    }
    else{
        return arr[count];
    }
}