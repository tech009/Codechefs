#include <bits/stdc++.h>
using namespace std;

int32_t main(void){

    int t;
    cin>>t;
    while(t--){

        int N,W,Wr;
        cin>>N>>W>>Wr;

        map<int, int> mp;
        int arr[N];

        for(int i=0; i<N; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        if(Wr>=W)
            cout<<"YES"<<endl;
        else{
            W -= Wr;
            for(int i=0; i<N; i++){
                if(mp[arr[i]]>=2){
                    int count = mp[arr[i]];
                    if((count%2)==0)
                        W-=count*arr[i];
                    else
                        W-=(count-1)*arr[i];
                    mp[arr[i]]=0;
                }
                if(W<=0)
                    break;
            }
            if (W<=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}