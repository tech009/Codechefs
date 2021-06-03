#include <bits/stdc++.h>
using namespace std;

int main (void){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int check[100] = {0};
        bool flag = false;
        bool writ = false;
        for(int i=0; i<n; i++)
            cin>>a[i];

        int max = 0;
        for(int i=0; i<n; i++){
            if(a[i]!=a[n-i-1]){
                flag = true;
                break;
            }
            if(max<a[i])
                max = a[i];
            check[a[i]] = 1;
        }
        
        if (flag){
            cout<<"no"<<endl;
            writ = true;
        }
        else if(a[0] != 1){
            cout<<"no"<<endl;
            writ = true;
            flag = true;
        }
        else if(max>7){
            cout<<"no"<<endl;
            writ = true;
            flag = true;
        }
        else{
            for(int i=1; i<=7; i++)
                if(check[i]==0)
                    flag = true;
            if(flag && (!writ)){
                cout<<"no"<<endl;
                writ = true;
            }
            
            int lim;
            if(n&1)
                lim = (n/2)+1;
            else
                lim = n/2;
            
            for(int i=0; i<lim-1; i++)
                if(a[i]>a[i+1])
                    flag = true;
        }
        if(flag && (!writ))
            cout<<"no"<<endl;
        else if(!flag)
            cout<<"yes"<<endl;

    }
    return 0;
}