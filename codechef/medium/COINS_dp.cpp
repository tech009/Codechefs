#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef long lld;
const lld N = 500000001;

lld max(lld a, lld b){
    return a>b?a:b;
}

void solve(lld arr[]){
    for(lld i=0; i<N; i++){
        arr[i] = max(i,(arr[i/2]+arr[i/3]+arr[i/4]));
    }
}

int main(void){

    lld n;
    lld* arr;
    arr = (lld*)malloc(sizeof(lld)*N);
    solve(arr);
    while(cin>>n){
        if(n<N)
            cout<<arr[n]<<endl;
        else
            cout<<max(n,(arr[n/2]+arr[n/3]+arr[n/4]))<<endl;
    }
    return 0;
}