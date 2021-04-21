#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int lld;

void swap(int* a, int* b){
    lld t = *a;
    *a = *b;
    *b = t;
}

lld partition(lld arr[],lld low, lld high){

    lld pivot = arr[high];
    lld pos = low-1;

    for(lld i=0; i<(high-1); i++){
        if(arr[i] <= pivot){
            pos++;
            swap(&arr[i],&arr[pos]);
        }
    }
    swap(&arr[pos+1],arr[high]);
    return (i+1);
}

void quicksort(lld arr, lld low, lld high){

    lld pi = partition(arr, low, high);

    quicksort(arr, low, pi-1);
    quicksort(arr, pi+1, high);
}

int main(){

    lld N;
    cin>>N;
    lld arr[N];
    for(lld i = 0;i<N;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,N-1);
    lld max = 0;
    for(lld i=0; i<N; i++){
        if(max<(arr[i]*(N-i)))
            max = arr[i]*(N-i);
    }
    cout<<max<<endl;
    return 0;
}