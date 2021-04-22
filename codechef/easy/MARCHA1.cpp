#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void quicksort(int[], int, int);

int main(void){

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        quicksort(arr, 0, n-1);
        if(m<arr[0]){
            cout<<"no"<<endl;
            continue;
        }
        

    }
    return 0;
}