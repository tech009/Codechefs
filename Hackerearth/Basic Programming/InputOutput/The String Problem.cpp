#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool A = false, E = false, I = false, O = false, U = false;
        bool a = false, e = false, ii = false, o = false, u = false;

        for(int i = 0; i<s.length(); i++){
            switch (s[i])
            {
            case 'A': A = true;
                break;

            case 'E': E = true;
                break;

            case 'I': I = true;
                break;

            case 'O': O = true;
                break;

            case 'U': U = true;
                break;

            case 'a': a = true;
                break;

            case 'e': e = true;
                break;

            case 'i': ii = true;
                break;

            case 'o': o = true;
                break;

            case 'u': u = true;
                break;
            
            default:
                break;
            }
        }

        if((A&&E&&I&&O&&U)||(a&&e&&ii&&o&&u))
            cout<<"lovely string"<<endl;
        else
            cout<<"ugly string"<<endl;
    }
    return 0;
}