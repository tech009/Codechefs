#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n] = {0};
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        //Calculate Rotation.
        k %= n;
        if(k==0){
            for(int i=0; i<n; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            continue;
        }

        int last = n-1-k;
        int  start = (last + 1);
        if(start >= n)
            start = start - n;
        for(int i = start; i!=last;){
            cout<<arr[i]<<" ";
            if((i+1) == n)
                i = 0;
            else
                i++;
        }
        cout<<arr[last];
        cout<<endl;
    }
    return 0;
}