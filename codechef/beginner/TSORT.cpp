#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long int ld;

void swap(ld*, ld*);
ld partition(ld[], ld, ld);
void quicksort(ld[], ld, ld);

int main(void){

    ld n;
    cin >> n;

    ld* arr;

    arr = (ld*)malloc(sizeof(ld)*n);
    for(ld i=0; i<n; i++)
        cin >> arr[i];
    
    quicksort(arr, 0, n-1);
    for(ld i=0; i<n; i++)
        cout<<arr[i]<<endl;

    return 0;
}

void swap(ld* a, ld* b){
    ld t = *a;
    *a = *b;
    *b = t;
}

/*ld partition(ld arr[], ld low, ld high){

    ld mid = (low+high)/2;
    ld pivot = arr[mid];
    ld i=low-1;

    for(ld j=low; j<=high; j++){
        if(arr[j]<pivot){
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    return(i+1);
}

void quicksort(ld arr[], ld low, ld high){
    if(low<high){
        ld pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}*/

void quicksort(ld arr[], ld left, ld right) {
      ld i = left, j = right;
      ld tmp;
      ld pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quicksort(arr, left, j);
      if (i < right)
            quicksort(arr, i, right);
}