#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int ans = 0;
        int speed;
        if(N==1){
            cin>>speed;
            cout<<1<<endl;
            continue;
        }
        else{
            ans = 1;
            int initspeed = 0;
            cin>>initspeed;
            N--;
            while(N--){
                cin>>speed;
                if(initspeed<speed)
                    continue;
                ans++;
                initspeed = speed;
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}