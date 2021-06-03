#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void){

    int t;
    cin>>t;

    while(t--){
        unordered_map <int, int> umap;
        int n;
        cin>>n;

        int tmp;
        for(int i=0; i<n; i++){
            cin>>tmp;
            umap[tmp]++;
        }

        int count = 0;
        unordered_map<int, int>:: iterator itr;
        for (itr = umap.begin(); itr != umap.end(); itr++)
            count++;

        cout<<count<<endl;

    }
    return 0;
}