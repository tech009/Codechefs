#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(void){
    int testcase;
    cin>>testcase;
    while(testcase--){

        ll n,Q;
        cin>>n>>Q;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int dp[31] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<31; j++){
                ll x=1<<j;
                if(arr[i]&x)
                    dp[j]+=1;
            }
        }

        ll ans = 0;
        for(int i=0; i<31; i++){
            ll x = 1<<i;
            if(dp[i])
                ans += x;
        }

        cout<<ans<<endl;
        for(int k=0; k<Q; k++){
            ll index, val;
            cin>>index>>val;
            for(int i=0; i<31; i++){
                ll x=1<<i;
                if(arr[index-1]&x){
                    dp[i] -=1;
                }
            }

            for(int i=0; i<31; i++){
                ll x= 1<<i;
                if(val&x){
                    dp[i] += 1;
                }
            }

            arr[index-1] = val;
            ll ans = 0;
            for(int i=0; i<31; i++){
                ll x = 1<<i;
                if(dp[i]>0)
                    ans += x;
            }
            cout<<ans<<endl;
        }
    }
}