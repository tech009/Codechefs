#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t, n;
    cin>>t;
    while(t--){
        int res = 0;
        cin>>n;
        long int a[n];
        long int b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];

        for(int i=n-1; i>0; i--)
            a[i] = a[i]-a[i-1];

        for(int i=0; i<n; i++)
            if(a[i]>=b[i])
                res++;

        cout<<res<<endl;
        res = 0;
    }
}