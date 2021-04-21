#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX_SIZE 101
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

void sort(int[], int);
void main(void){
    int i,n;
    printf("Enter the number of numbers to generate: ");
    scanf("%d", &n);

    if(n<1 || n>MAX_SIZE){
        fprintf(stderr, "Improper Value of n\n");
        exit(EXIT_FAILURE);
    }

    int* list;
    list = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        list[i] = rand() % 1000;
        printf("%d ", list[i]);
    }

    sort(list, n);
    printf("\nSorted Array: \n");
    for(int i=0; i<n; i++)
        printf("%d ",list[i]);
    printf("\n");
    free(list);
}

void sort(int list[], int n){
    int i, j, min, temp;
    for(i = 0; i<n-1; i++){
        min = i;
        for(j = i+1; j<n; j++)
            if (list[j] < list[min])
                min = j;
        SWAP(list[i], list[min], temp);
    }
}