#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(void){

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        int x = gcd(n, m);

        cout<<((n*m)/(x*x))<<endl;
    }
    return 0;
}