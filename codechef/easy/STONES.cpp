#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;

        int lenOfa = a.length();
        map<char, int> jewels;
        for(int i=0; i<lenOfa; i++)
            jewels[a[i]] = 0;

        int lenOfb = b.length(); 
        int count = 0;
        for(int i=0; i<lenOfb; i++){
            if(jewels.find(b[i])==jewels.end())
                continue;
            else
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}