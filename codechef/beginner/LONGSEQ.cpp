#include <bits/stdc++.h>
using namespace std;

int main(void){

    int ones=0, zeros=0, t=0;
    string D;

    cin>>t;
    while(t--){
        cin >> D;
        int l = D.length();

        for(int i=0; i<l; i++)
            if(D[i]=='1')
                ones++;
            else
                zeros++;
        
        if((ones==1)||(zeros==1))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

        ones = 0; zeros = 0;
    }
    return 0;
}
