#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;

    while(t--){
        long int n;
        cin>>n;

        long int arr[n];
        for(long int i=0; i<n; i++)
            cin>>arr[i];
        
        long int count = 0;
        for(long int i=0; i<n; i++){

            long int sum = 0;
            long int prod = 1;

            for(long int j=i; j>=0; j--){

                sum += arr[j];
                prod *= arr[j];

                if(sum==prod)
                    count++;
            }
        }

        cout<<count<<endl;
    }
}