#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){

        long int n;
        cin>>n;
        
        if(n==0)
            cout<<0<<endl;
        else if(n==1)
            cout<<1<<endl;
        else{
            for(long int i=0; i<n; i++){
                long int coins = (i*(i+1))/2;
                if(coins>n){
                    cout<<i-1<<endl;
                    break;
                }
                else if(coins==n){
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}