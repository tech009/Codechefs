#include <bits/stdc++.h>
using namespace std;

int main(void){

    long int t;
    cin>>t;
    while(t--){

        long int D=0, d=0, P=0, Q=0;
        cin>>D>>d>>P>>Q;

        long int n = D/d;
        long int tmp = P*d;
        long int tmp2 = Q*d;

        long int sum = (n*((2*tmp)+(n-1)*tmp2))/2;
        long int tmp3 = D - (n*d);
        tmp2*=n;
        sum += tmp3*(P+(n*Q));

        cout<<sum<<endl;
    }

    return 0;
}