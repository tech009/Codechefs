#include <bits/stdc++.h>
using namespace std;

int main(void){

    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n];
        long int min = LLONG_MAX;
        long int sum = 0;
        for(long int i=0; i<n; i++){
            cin>>arr[i];
            if (min>arr[i])
                min = arr[i];
            sum += arr[i];
        }
        
        cout<<(sum-(n*min))<<endl;
    }
    return 0;
}