#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];

        for(int i=0; i<n; i++)
            cin>>arr[0][i];

        for(int i=1; i<n; i++)
            for(int j=0; j<(n-i); j++){
                if(arr[i-1][j+1]>arr[i-1][j])
                    arr[i][j] = gcd(arr[i-1][j], arr[i-1][j+1]);
                else
                    arr[i][j] = gcd(arr[i-1][j+1], arr[i-1][j]);
            }


        for(int i=0; i<n; i++)
            cout<<(arr[0][i]/arr[n-1][0])<<" ";
        
        cout<<endl;
    }

    return 0;
}