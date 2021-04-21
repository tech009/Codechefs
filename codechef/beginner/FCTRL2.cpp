#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int arr[1000];
        int n;
        cin >> n;
        arr[0] = 1;
        int m = 1;
        while(n){
            int temp = 0;
            for(int i=0; i<m; i++){
                int x = (arr[i]*n)+temp;
                arr[i] = x%10;
                temp = x/10;
            }
            while(temp>0){
                arr[m++]=temp%10;
                temp /= 10;
            }
            n--;
        }

        for(int i=(m-1); i>-1; i--)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}