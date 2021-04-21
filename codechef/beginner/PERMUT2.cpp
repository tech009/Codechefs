#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long int ld;

int main(void){

    ld n;
    cin>>n;
    while(n){

        ld a[n];
        ld b[n] = {0};

        for(ld i=0; i<n; i++){
            cin>>a[i];
            b[(a[i])-1] = i+1;
        }

        bool flag = false;
        for(ld i=0; i<n; i++)
            if(a[i]!=b[i]){
                flag = true;
                break;
            }

        if(flag)
            cout<<"not ambiguous"<<endl;
        else
            cout<<"ambiguous"<<endl;

        cin>>n;
    }

    return 0;

}