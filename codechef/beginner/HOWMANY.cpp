#include <bits/stdc++.h>
using namespace std;

int main(void){

    long int n;
    cin>>n;

    if(n==0)
        cout<<1<<endl;
    else{
        int dig = log10(n);
        dig++;
        if((dig==1)||(dig==2)||(dig==3))
            cout<<dig<<endl;
        else
            cout<<"More than 3 digits"<<endl;
    }
    return 0;
}