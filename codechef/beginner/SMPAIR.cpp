#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int lld;

int main(void){

    lld t;
    cin>>t;
    while(t--){
        lld n;
        cin>>n;
        lld arr[n];
        lld min1 = 1000000000000000;
        lld ind1;
        for(lld i=0; i<n; i++){
            cin>>arr[i];
            if(min1>arr[i]){
                min1 = arr[i];
                ind1 = i;
            }
        }

        lld min2 = 10000000000000000;
        for(int i=0; i<n; i++){
            if(min2>arr[i]){
                if(ind1!=i){
                    min2 = arr[i];
                }
            }
        }

        cout<<(min1+min2)<<endl;        
    }
    return 0;
}