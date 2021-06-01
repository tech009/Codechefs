#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int person;
        for(int i=0; i<n; i++){
            cin>>person;
            if(k>=person){
                cout<<1;
                k-=person;
            }
            else
                cout<<0;
        }
        cout<<endl;
    }
    return 0;
}