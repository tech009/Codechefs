#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(void){

    int t;
    cin>>t;
    stack<char> st;
    while(t--){
        string s;
        cin>>s;

        char c;

        for(int i=0; i<s.length(); i++){
            c = s[i];
            if((c=='(')||(c=='*')||(c=='/'))
                st.push(c);
            else if(c==')'){
                char x;
                x = st.top();
                st.pop();
                while(x!='('){
                    cout<<x;
                    x = st.top();
                    st.pop();
                }
            }
            else if((c=='+')||(c=='-')){
                if((st.top()=='(')||(st.top()=='+')||(st.top()=='-')||(st.empty()))
                    st.push(c);
                else{
                    char x;
                    while(!st.empty()){
                        x = st.top();
                        if((x=='/')||(x=='*')){
                            cout<<x;
                            st.pop();
                        }
                        else
                            break;
                    }
                }

            }
            else if(c=='^'){
                if((st.top()=='(')||(st.top()=='^')||(st.empty()))
                    st.push(c);
                else{
                    char x;
                    while(!st.empty()){
                        x = st.top();
                        if((x=='/')||(x=='*')||(x=='+')||(x=='-')){
                            cout<<x;
                            st.pop();
                        }
                        else
                            break;
                    }
                }

            }
            else
                cout<<c;
        }
        while(!st.empty()){
            if(st.top()=='(')
                continue;
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}