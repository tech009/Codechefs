#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void){

    unordered_map<int, int> umap;
    umap[0]=6;
    umap[1]=2;
    umap[2]=5;
    umap[3]=5;
    umap[4]=4;
    umap[5]=5;
    umap[6]=6;
    umap[7]=3;
    umap[8]=7;
    umap[9]=6;

    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;

        int sum = a+b;
        int res = 0;
        while(sum>0){
            res+=umap[sum%10];
            sum/=10;
        }
        cout<<res<<endl;
    }

}