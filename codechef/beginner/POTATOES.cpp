#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int prime(int);

int main(void){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = prime(a+b);
        cout<<(c-(a+b))<<endl;
    }
    return 0;
}

int prime(int x){

    while(true){
        bool notprime = false;
        x++;
        for(int i=2;i<x;i++){
            if((x%i)==0){
                notprime = true;
                break;
            }
        }
        if(notprime)
            continue;
        return x;
    }
}