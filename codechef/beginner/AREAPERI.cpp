#include <bits/stdc++.h>
using namespace std;

int main(void){

    int l,b;
    cin>>l>>b;
    int area = l*b;
    int peri = 2*(l+b);

    if(area>peri)
        cout<<"Area\n"<<area<<endl;
    else if(peri>area)
        cout<<"Peri\n"<<peri<<endl;
    else
        cout<<"Eq\n"<<area<<endl;
        
    return 0;
}