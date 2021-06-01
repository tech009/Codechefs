#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n, k;
    int res = 0;

    cin >> t;
    while(t--){
        cin >> n >> k;
        int tmp;
        while(n--){
            cin >> tmp;
            tmp += k;

            if((tmp%7)==0)
                res++;
        
        }
        cout<<res<<endl;
        res = 0;
    }
    return 0;
}