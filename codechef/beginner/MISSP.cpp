#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main(void){

    int t;
    cin>>t;
    while(t--){
        lld n;
        cin>>n;
        lld x=0;
        while(n--){
            lld inp;
            cin>>inp;
            x = x^inp;
        }
        cout<<x<<endl;
    }
    return 0;
}