#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
typedef long int ld;

ld arr[100000];
ld size=3;

void prepare(){

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    for(ld i=4; i<=100000; i++){
        ld lim = round(sqrt(i));
        bool flag = false;
        for(ld j=1; j<size; j++){
            if(arr[j]>lim)
                break;
            if((i%arr[j])==0){
                flag=true;
                break;
            }
        }
        if(flag)
            continue;
        arr[size++]=i;
    }
}

int bin_srch(ld n){
    ld low = 0;
    ld high = size-1;
    if(n==arr[low])
        return 1;
    else if(n==arr[high])
        return 1;
    else if(n>arr[high])
        return -1;
    else{
        while(low<high){
            ld mid = (low+high)/2;
            if(n==arr[mid])
                return 1;
            else if(n<arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
    }
}


int main(){

    int t;
    cin>>t;
    prepare();
    while(t--){
        ld n;
        cin>>n;
        if(bin_srch(n)==-1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}