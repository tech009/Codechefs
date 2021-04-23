#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int a=0, b=0;
        for(int i=0; i<s.length(); i++)
            if(s[i]=='a')
                a++;
            else
                b++;
        
        if(a==b)
            cout<<a<<endl;
        else
            cout<<min(a,b)<<endl;
    }
    return 0;
}