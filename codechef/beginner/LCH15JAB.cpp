#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    int t;
    cin>>t;
    while(t--){
        string s;
        if((s.length())&1){
            cout<<"NO"<<endl;
            continue;
        }
        int arr[26] = {0};
        int max = 0;
        for(int i=0; i<s.length(); i++){
            int tmp = (int)s[i];
            tmp -= 97;
            arr[tmp]++;
            if(arr[tmp]>max)
                max = arr[tmp];
        }

        if (max == ((s.length())/2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}