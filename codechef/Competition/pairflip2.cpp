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

        long int row_ans = 0;
        long int col_ans = 0;

        bool rflag = true;
        bool cflag = true;

        // Row matching !!
        for (long int i=0; i<N; i++){
            long int count = 0;
            for (long int j=0; j<M; j++){
                if(A[i][j] == B[i][j])
                    continue;
                count++;
            }
            if((count%2)!=0){
                rflag = false;
                break;
            }
            row_ans += (count/2);
        }

        // Column Matching !!
        for (long int i=0; i<M; i++){
            long int count = 0;
            for (long int j=0; j<N; j++){
                if(A[j][i] == B[j][i])
                    continue;
                count++;
            }
            if((count%2)!=0){
                cflag = false;
                break;
            }
            col_ans += (count/2);
        }

        if(cflag && rflag)
            cout<<min(row_ans,col_ans)<<endl;
        else if(rflag)
            cout<<row_ans<<endl;
        else if(cflag)
            cout<<col_ans<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}