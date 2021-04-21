#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll testcases,Q,d;
    cin>>testcases>>Q>>d;
    while(testcases--){
        ll xleft=(-1ll)*1e18,xright=1e18,yleft=xleft,yright=xright;
        xleft--;
        xright++;
        yleft--;
        yright++;
        ll attack=1;
        string response;
        ll tmp=-1;
        while(true){
            if(attack==1){
                if(xright>=(xleft+2) && yright>=(yleft+2)){
                    ll middle_x=(xright+xleft)/2;
                    ll middle_y=(yright+yleft)/2;
                    cout<<attack<<" "<<middle_x<<" "<<middle_y<<endl;
                    cin>>response;
                    if(response.compare("O")==0||response.compare("FAILED")==0)
                    break;
                    if(response[0]=='X'){
                        xleft=middle_x-1;
                        xright=middle_x+1;
                    }
                    else if(response[0]=='P'){
                        if(d==0){
                            xright=middle_x-1;
                        }
                        else{
                            xright=middle_x;
                            xleft--;
                        }}
                    else{
                        if(d==0){
                            xleft=middle_x+1;
                        }
                        else{
                            xleft=middle_x;
                            xright++;
                        }
                    }
                    if(response[1]=='Y'){
                        yleft=middle_y-1;
                        yright=middle_y+1;
                    }
                    else if(response[1]=='P'){
                        if(d==0){
                            yright=middle_y-1;
                        }
                        else{
                            yright=middle_y;
                            yleft--;
                        }}
                    else{
                        if(d==0){
                            yleft=middle_y+1;
                        }
                        else{
                            yleft=middle_y;
                            yright++;
                        }
                    }
                    if(d==0){

                    }
                    else{
                        if((xright<=(xleft+3))&&(yright<=(yleft+3))){
                            attack=2;
                        }
                    }
                    }
                    else{
                        attack=2;
                        cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xright<<" "<<yright<<endl;
                        cin>>response;
                        break;
                    }}
                    else{
                        if(xright==(xleft+3)&&(yright==(yleft+3))){
                            cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xleft+2<<" "<<yright<<endl;
                        cin>>response;
                        if(response.compare("O")==0){
                            break;
                        }
                        else if(response.compare("IN")==0){
                            xright=xleft+2;
                        }
                        else{
                            xleft=xleft+2;
                            xright++;
                        }
                    }
                    if(xright==(xleft+2)&&(yright==(yleft+3))){
                        cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xright<<" "<<yleft+2<<endl;
                        cin>>response;
                        if(response.compare("O")==0){}
                        else if(response.compare("IN")==0){
                            cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xright<<" "<<yleft+2<<endl;
                            cin>>response;
                        }
                        else{
                            cout<<attack<<" "<<xleft<<" "<<yleft+2<<" "<<xright<<" "<<yleft+4<<endl;
                            cin>>response;
                        }
                        break;
                    }
                    if((xright==(xleft+3))&&(yright==(yleft+2))){
                        cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xleft+2<<" "<<yright<<endl;
                        cin>>response;
                        if(response.compare("O")==0){}
                        else if(response.compare("IN")==0){
                            cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xleft+2<<" "<<yright<<endl;
                            cin>>response;
                        }
                        else{
                            cout<<attack<<" "<<xleft+2<<" "<<yleft<<" "<<xleft+4<<" "<<yright<<endl;
                            cin>>response;
                        }
                        break;
                    }
                    else{
                        cout<<attack<<" "<<xleft<<" "<<yleft<<" "<<xright<<" "<<yright<<endl;
                        cin>>response;
                        break;
                }
            }
            cout.flush();
        }
        cout.flush();
    }
    return 0;
}