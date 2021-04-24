#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int valOfa = 97;
        int n,k;
        cin>>n>>k;
        char arr[n];
        for(int i=0; i<n; i++)
            arr[i] = (char)valOfa++;

        while(k--){
            char tmp = arr[0];
            for(int i=0; i<n; i++){
                if(i==0){
                    cout<<arr[i];
                    continue;
                }
                cout<<arr[i];
                arr[i-1] = arr[i];
            }
            arr[n-1]=tmp;
            cout<<endl;
        }
    }
}