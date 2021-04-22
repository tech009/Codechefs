#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int G;
        cin>>G;
        while(G--){
            int I, N, Q;
            cin>>I>>N>>Q;

            if(N&1){
                int ans = (N+1)/2;
                if(I==Q)
                    cout<<N-ans<<endl;
                else
                    cout<<ans<<endl;
            }
            else{
                int ans = N/2;
                if(I==Q)
                    cout<<N-ans<<endl;
                else
                    cout<<ans<<endl;
            }
        }
    }
    return 0;
}