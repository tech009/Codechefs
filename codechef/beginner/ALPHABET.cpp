#include <bits/stdc++.h>
using namespace std;

int main(void){

    int arr[26] = {0};
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
        arr[(int(s[i])) - 97] = 1;
    
    int n;
    cin>>n;
    while(n--){
        string t;
        cin>>t;

        bool flag = false;
        for(int i=0; i<t.length(); i++){
            if(arr[(int(t[i]))-97] == 0)
                flag = true;
            
            if(flag)
                break;
        }

        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;

    }
    return 0;
}