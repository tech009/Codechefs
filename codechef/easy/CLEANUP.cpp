#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high);

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n] = {0};
        int count=0;
        while(m--){
            int k;
            cin>>k;
            arr[k-1]=1;
            count++;
        }
        if(count==n)
            cout<<endl<<endl;
        else{
            int chef[n];
            int asst[n];
            int cc=0;
            int ac=0;
            bool chefturn = true;
            for(int i=0; i<n; i++){
                if(arr[i]==0){
                    if(chefturn){
                        chef[cc++]=i+1;
                        chefturn = false;
                    }
                    else{
                        asst[ac++]=i+1;
                        chefturn = true;
                    }
                }
            }
            for(int i=0; i<cc; i++)
                cout<<chef[i]<<" ";
            cout<<endl;
            for(int i=0; i<ac; i++)
                cout<<asst[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}