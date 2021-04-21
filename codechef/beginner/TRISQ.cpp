#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        if (b<4){
            cout<<0<<endl;
            continue;
        }

        if(b&1){
            b -= 3;
            b /= 2;
            cout<<((b*(b+1))/2)<<endl;
        }
        else{
            b -= 2;
            b /= 2;
            cout<<((b*(b+1))/2)<<endl;
        }
    }

    return 0;
}