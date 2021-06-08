#include <bits/stdc++.h>
using namespace std;
typedef long long int ld;
ld MODULO = 1000000007;

ld exponentiation(ld base, ld exp){
    ld t=1L;
    while(exp>0){
        if(exp%2!=0)
            t = (t*base)%MODULO;
        base = (base*base)%MODULO;
        exp /= 2;
    }
    return t%MODULO;
}

int main(void){

    ld t=0, n=0, m=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ld base = 2;
        base = exponentiation(base, n);
        base--;

        cout<<exponentiation(base, m)<<endl;
    }
    return 0;
}