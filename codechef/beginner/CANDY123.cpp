#include <bits/stdc++.h>
using namespace std;


int main(void){

    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        int x=1, y=2;
        while(true){
            a-= x;
            if(a<0){
                cout<<"Bob"<<endl;
                break;
            }

            b-= y;
            if(b<0){
                cout<<"Limak"<<endl;
                break;
            }
            x+=2;
            y+=2;
        }
    }
    return 0;
}