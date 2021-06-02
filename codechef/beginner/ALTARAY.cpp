#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n] = {0};

        for(int i=0; i<n; i++)
            cin>>a[i];

        bool pos = false;
        bool neg = false;
        for(int i=n-1; i>=0; i--){
            if(a[i]>=0){
                if(neg){
                    b[i] = b[i+1] + 1;
                    pos = true;
                    neg = false;
                }
                else{
                    b[i] = 1;
                    pos = true;
                }
            }
            else{
                if(pos){
                    b[i] = b[i+1] + 1;
                    neg = true;
                    pos = false;
                }
                else{
                    b[i] = 1;
                    neg = true;
                }
            }
        }

        for(int i=n-1; i>=0; i++)
            cout<<b[i];
        cout<<endl;
    }
    return 0;
}