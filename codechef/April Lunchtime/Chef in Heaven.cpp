#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int L;
        cin>>L;
        string s;
        cin>>s;

        int zeros = 0;
        int ones = 0;
        bool goodLife = false;
        for(int i=0; i<L; i++){
            if(s[i] == '1')
                ones++;
            else
                zeros++;

            if((i+1)==(ones*2)){
                goodLife = true;
                break;
            }
            else if((ones*2)>=L){
                goodLife = true;
                break;
            }
        }

        if(goodLife)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}