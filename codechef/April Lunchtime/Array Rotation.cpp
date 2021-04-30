#include <bits/stdc++.h>
using namespace std;
long int N = 1000000007;
typedef long long int lld;

lld mod(lld a, lld b)
{
    lld r = a % b;
    return r < 0 ? r + b : r;
}

int main(void){

    int n;
    cin>>n;
    lld SOA = 0;
    lld tmp = 0;
    for(int i=0; i<n; i++){
        cin>>tmp;
        SOA += tmp;
        SOA = mod(SOA, N);
    }


    int Q;
    cin>>Q;

    for(int i=0; i<Q; i++){
        cin>>tmp;
        SOA *= 2;
        SOA = mod(SOA, N);
        cout<<SOA<<endl;
    }
    return 0;
}