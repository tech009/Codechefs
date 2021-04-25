#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k;

        map<string, int> dict;

        string words[n];
        for(int i=0; i<n; i++){
            cin>>words[i];
            dict[words[i]]=0;
        }

        while(k--){
            cin>>l;
            string phWords;
            while(l--){
                cin>>phWords;
                if (dict.find(phWords) == dict.end())
                    continue;
                dict[phWords]++;
            }
        }
        for(int i=0; i<n; i++){
            if(dict[words[i]])
                cout<<"YES ";
            else
                cout<<"NO ";
        }
        cout<<endl;
    }
    return 0;
}