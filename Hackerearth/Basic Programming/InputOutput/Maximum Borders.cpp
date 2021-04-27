#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        char arr[n][m];
        scanf("%s", &arr[0]);
        if(n>1){
            for(int i=1; i<n; i++)
                for(int j=0; j<m; j++){
                    char a;
                    cin>>a;
                    if(((arr[i-1][j]=='#')||(arr[i-1][j]=='$'))&&(a=='#'))
                        arr[i][j] = '$';
                    else
                        arr[i][j] = a;
                }
        }

        int max = 0;
        for(int i=0; i<n; i++){
            int tmp = 0;
            for(int j=0; j<m; j++){
                if(arr[i][j]=='#')
                    tmp++;
                else{
                    if(tmp>max)
                        max = tmp;
                    tmp = 0;
                }
            }
        }

        cout<<max<<endl;
    }
    return 0;
}