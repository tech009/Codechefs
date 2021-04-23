#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int M,x,y;
        int arr[101]={0};
        cin>>M>>x>>y;
        int lim = x*y;

        for(int i=0; i<M; i++){
            int pos;
            cin>>pos;
            arr[pos]=1;
            int lower=max(1, pos-lim);
            int high=min(100, pos+lim);
            for(int j=lower; j<=high; j++)
                arr[j] = 1;
        }

        int ans = 0;
        for(int i=1; i<=100; i++)
            if(!arr[i])
                ans++;

        cout<<ans<<endl;

    }
    return 0;
}