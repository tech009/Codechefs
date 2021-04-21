#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int a,b;
    cin>>a>>b;

    int c = a-b;
    int length = 0;

    int arr[6];
    while(c>0){
        arr[length++] = c%10;
        c /= 10;
    }

    if(arr[0]==9)
        arr[0]=0;
    else
        arr[0] += 1;

    for(int i=0; i<length; i++)
        cout<<arr[i];
    cout<<endl;

    return 0;
}