#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main(void){
    
    int t;
    cin>>t;
    while(t--){
        lld a,b,k;
        cin>>a>>b>>k;

        if(k==0){
            cout<<0<<endl;
            continue;
        }
        else if(k==1){
            cout<<a<<endl;
            continue;
        }
        else{
            if(k&1){
                lld x,y;
                x = (k>>1) + 1;
                y = k-x;
                lld galls = (a*x)-(b*y);
                cout<<galls<<endl;
            }
            else{
                lld galls = (a*(k/2)) - (b*(k/2));
                cout<<galls<<endl;
            }
        }
    }
    return 0;
}