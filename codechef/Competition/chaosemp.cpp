#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int test,Q,D;
    cin >>test>>Q>>D;

    while(test--){

        ll x1=(-1LL)*2e18,x2=(1LL)*2e18,y1=x1,y2=x2;
        ll l = x1;
        ll r = x2;
        ll curr=1LL;
        string cc;

        ll mid = 0;
        int flag = 0;
        int flag2 = 0;
        while(x1 <= x2){

            mid = (x1+x2)/2;
            cout <<curr<<" "<<mid<<" "<<y1<<endl;

            cin >> cc;
            if(cc[0] == 'X'){
                break;
            }
            if(cc[0] == 'O'){
                flag = 1;
                break;
            }
            if(cc[0] == 'N')
            x1 = mid+1LL;
            if(cc[0] == 'P')
            x2 = mid-1LL;

            if((x2 - x1) <= (3*D)){
                flag2 = 1;
                break;
            }
        }

        curr = 2LL;

        if(flag2 && (!flag)){
            int right = 0;
            int left = 1;
            cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
            while(true){
                cin >> cc;

                if((cc[0] == 'O') && (cc.length() == 1)){
                    flag = 1;
                    break;
                }

                else{
                    if(cc[0] == 'I'){
                        x1 -= D;
                        cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                        continue;
                    }
                    else{
                        if(!right){
                            x2 = x1;
                            x1 -= (2*D);
                            cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                            left = 0;
                        }
                        else{
                            x1 = x2;
                            x2 += (2*D);
                            cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                            right = 0;
                        }

                    }
                }
            }


        }
        if(!flag){
            if (((mid+D) > r) || ((mid-D < l))){
                if ((mid+D) > r){
                    x1 = mid - D;
                    x2 = mid;
                    cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                }
                else{
                    x1 = mid;
                    x2 = mid + D;
                    cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                }
            }

            else{
                int minus = 1;
                while(true){
                    if(minus){
                        x1 = mid;
                        x2 = mid + D;
                        cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                        cin >> cc;
                        if((cc[0] == 'O') && (cc.length() == 1))
                        break;
                        mid = x1 - D;
                        minus++;
                        minus %= 3;
                    }

                    else{
                        x2 = mid;
                        x1 = mid - D;
                        cout<<curr<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                        cin >> cc;
                        if((cc[0] == 'O') && (cc.length() == 1))
                        break;
                        mid = x2 + D;
                        minus++;
                    }
                }
            }
        }
    }
    return 0;
}