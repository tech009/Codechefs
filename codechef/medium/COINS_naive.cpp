#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int lld;

lld maximise(lld);

int main(void){

    lld t;
    while(cin>>t){
        cout<<maximise(t)<<endl;
    }
}

lld maximise(lld n){
    lld a,b,c;
    a = n/2;
    b = n/3;
    c = n/4;
    if((a+b+c)<n)
        return n;
    
    return (maximise(a)+maximise(b)+maximise(c));
}