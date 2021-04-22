#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        bool foundOne = false;

        while(N--){
            int P,C;
            cin>>P>>C;
            if(C<=K)
                if(P>=(X-Y)){
                    foundOne = true;
                }
        }
        if (foundOne)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
    return 0;
}