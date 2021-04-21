#include<bits/stdc++.h>
using namespace std;

long int min(long int a, long int b){
    if(b>a)
        return a;
    return b;
}

int main(){

    int testcases;
    cin >> testcases;
    while(testcases--){

        long int N,M,E;
        cin>>N>>M>>E;

        char A[N][M];
        char B[N][M];

        for(long int i=0;i<N;i++)
            cin>>A[i];
        for(long int i=0;i<N;i++)
            cin>>B[i];

        // Analysis !!
        long int row_odd = (N%4);
        long int col_odd = (M%4);

        if(row_odd && col_odd){
            cout<<"-1"<<endl;
            continue;
        }

        if((!row_odd) && (!col_odd)){
            if(N<=M){
                if(E==0){
                    cout<<((N/2)*M)<<endl;
                }
                else{
                    cout<<((N/2)*M)<<endl;
                    for(long int i=0; i<N; i++){
                        int count = 0;
                        long int ind = 0;
                        for(long int j=0;j<M; j++){
                            if(A[i][j]==B[i][j])
                                continue;
                            count++;
                            if(count == 1)
                                ind = j;
                            if(count == 2)
                                cout<<'R'<<" "<<(i+1)<<" "<<(ind+1)<<" "<<(j+1)<<endl;
                            count %= 2;
                        }
                    }
                }
            }

            else{
                if(E==0){
                    cout<<((M/2)*N)<<endl;
                }
                else{
                    cout<<((M/2)*N)<<endl;
                    for(long int i=0; i<M; i++){
                        int count = 0;
                        long int ind = 0;
                        for(long int j=0;j<N; j++){
                            if(A[j][i]==B[j][i])
                                continue;
                            count++;
                            if(count == 1)
                                ind = i;
                            if(count == 2)
                                cout<<'C'<<" "<<(i+1)<<" "<<(ind+1)<<" "<<(j+1)<<endl;
                            count %= 2;
                        }
                    }
                }
            }
            continue;
        }

        if(!row_odd){
            if(E==0){
                cout<<((N/2)*M)<<endl;
            }
            else{
                cout<<((N/2)*M)<<endl;
                for(long int i=0; i<N; i++){
                    int count = 0;
                    long int ind = 0;
                    for(long int j=0;j<M; j++){
                        if(A[i][j]==B[i][j])
                            continue;
                        count++;
                        if(count == 1)
                            ind = j;
                        if(count == 2)
                            cout<<'R'<<" "<<(i+1)<<" "<<(ind+1)<<" "<<(j+1)<<endl;
                        count %= 2;
                    }
                }
            }
            continue;
        }

        if(!col_odd){
            if(E==0){
                cout<<((M/2)*N)<<endl;
            }
            else{
                cout<<((M/2)*N)<<endl;
                for(long int i=0; i<M; i++){
                    int count = 0;
                    long int ind = 0;
                    for(long int j=0;j<N; j++){
                        if(A[j][i]==B[j][i])
                            continue;
                        count++;
                        if(count == 1)
                            ind = i;
                        if(count == 2)
                            cout<<'C'<<" "<<(i+1)<<" "<<(ind+1)<<" "<<(j+1)<<endl;
                        count %= 2;
                    }
                }
            }
            continue;
        }

    }
    return 0;
}