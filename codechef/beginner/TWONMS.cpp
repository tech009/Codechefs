#include <bits/stdc++.h>
#include <math.h>
using namespace std;


long int min(long int a, long int b){
    if (a<b)
        return a;
    return b;
}

long int max(long int a, long int b){
    if (a>b)
        return a;
    return b;
}

int main(void){

    int t;
    cin>>t;

    while(t--){
        long int a, b, n;
        cin>>a>>b>>n;

        bool p = false;
        if(n&1)
            p = true;
        
        long int x;
        long int y;

        if(p){
            x = max(2*a,b);
            y = min(2*a,b);
        }
        else{
            x = max(a,b);
            y = min(a,b);
        }
        cout<<x/y<<endl;
    }
    
    return 0;
}