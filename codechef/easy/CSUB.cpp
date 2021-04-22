#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;

        string arr;
        cin>>arr;

        long int ones = 0;
        for(long int i=0; i<n; i++){
            if(arr[i]=='1')
                ones++;
        }

        long int ans = (ones*(ones+1))/2;
        cout<<ans<<endl;
    }
    return 0;
}