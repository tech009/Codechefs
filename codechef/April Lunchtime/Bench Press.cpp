#include <bits/stdc++.h>
using namespace std;

int main(void){

    long int t;
    cin>>t;
    while(t--){

        long int N,W,Wr;
        cin>>N>>W>>Wr;
        long long int sum = 0;
        map<long int,long int> mp;
        long int tmp;
        for(long int i=0; i<N; i++){
            cin>>tmp;
            sum += tmp;
            mp[tmp]++;
        }
        if((sum+Wr)<W){
            cout<<"NO"<<endl;
            continue;
        }
        else if(W==Wr){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            W -= Wr;
            map<long int, long int>::iterator itr;
            for(itr = mp.begin(); itr!=mp.end(); ++itr){
                long int cnt = itr->second;
                if(cnt>1){
                    W -= ((itr->first)*cnt);
                    if(cnt&1)
                        W += itr->first;
                }
                if(W<=0)
                    break;
            }
            if(W<=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}