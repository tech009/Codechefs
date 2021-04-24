#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char arr[26];
        for(int i=0; i<26; i++)
            arr[i] = (char)(97+i);

        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cout<<arr[(i+j)%26]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}