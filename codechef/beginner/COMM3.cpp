#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){

        int r;
        cin>>r;
        
        int arr[6];
        for(int i=0; i<6; i++)
            cin>>arr[i];
        
        int pair = 0;
        int x1,x2,x3,y1,y2,y3;
        x1 = arr[0];
        y1 = arr[1];
        x2 = arr[2];
        y2 = arr[3];
        x3 = arr[4];
        y3 = arr[5];

        if((((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))<=(r*r))
            pair++;

        if((((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)))<=(r*r))
            pair++;

        if((((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)))<=(r*r))
            pair++;

        if(pair>1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}