#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef long long int lld;

void quicksort(lld arr[], lld left, lld right) {
      lld i = left, j = right;
      lld tmp;
      lld pivot = arr[(left + right) / 2];
 
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

int main(void){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        lld* arr;
        arr=(lld*)malloc(sizeof(lld)*n);

        for(lld i=0; i<n; i++)
            cin>>arr[i];

        quicksort(arr, 0, n-1);

        lld min = LLONG_MAX;
        lld tmp;

        for(lld i=0; i<(n-1); i++){
            tmp = arr[i+1] - arr[i];
            if(min>tmp)
                min = tmp;
        }
        cout<<min<<endl;
    }
    return 0;
}