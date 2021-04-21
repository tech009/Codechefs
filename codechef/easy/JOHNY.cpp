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

lld bin_srch(lld k, lld low, lld high, lld arr[]){
    lld mid = (low+high)/2;
    if(arr[low]==k)
        return (low+1);
    else if(arr[high]==k)
        return (high+1);
    else{
        while(low<high){
            if(arr[mid]==k)
                return (mid+1);
            else if(k>arr[mid])
                low=mid+1;
            else if(k<arr[mid])
                high=mid-1;

            mid = (low+high)/2;
        }
    }
}

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lld* arr;
        arr = (lld*)malloc(sizeof(lld)*n);
        int k;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        cin>>k;
        k=arr[k-1];
        quicksort(arr, 0, n-1);
        lld idx=bin_srch(k, 0, n-1, arr);

        cout<<idx<<endl;
    }
    return 0;
}