#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long int ld;

int main(void){

    ld t;
    cin>>t;
    while(t--){

        ld n;
        cin>>n;
        ld count = 0;
        while(n>=5){
            count += n/5;
            n /= 5;
        }
        cout<<count<<endl;
    }

    return 0;
}