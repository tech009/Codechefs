#include <bits/stdc++.h>
using namespace std;

long int C(long int n, long int k){
    long int res = 1;
    if(k>(n-k))
        k = n-k;
    
    for(long int i=0; i<k; i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}

int main(void){
    long int t;
    cin>>t;
    while(t--){
        long int n,k;
        cin>>n>>k;
        cout<<C(n-1,k-1)<<endl;
    }
    return 0;
}