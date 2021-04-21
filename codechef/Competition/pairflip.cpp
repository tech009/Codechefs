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

        // Declare Variables Here !!
        vector<long int> row_vector[N];
        long int rowQ[N];
        vector<long int> col_vector[M];
        long int colQ[M];

        // Initiating Row Check !!
        for(long int i=0; i<N; i++){
            long int countQ = 0;
            for(long int j=0; j<M; j++){

                if (A[i][j] == B[i][j])
                    continue;
                if(B[i][j] == '?')
                    countQ++;
                row_vector[i].push_back(j);
            }
            rowQ[i] = countQ;
        }

        // Initiating Column Check !!
        for(long int i=0; i<M; i++){
            long int countQ = 0;
            for(long int j=0; j<N; j++){

                if(A[j][i] == B[j][i])
                    continue;
                if(B[j][i] == '?')
                    countQ++;
                col_vector[i].push_back(j);
            }
            colQ[i] = countQ;
        }

        // Analysis Part !!

        bool rflag = true;
        bool cflag = true;
        long int row_ans = 0;
        long int col_ans = 0;

        for(long int i=0;i<N;i++){
            long int count = 0;
            long int q = 0;
            if(rowQ[i]==M)
                continue;
            for (long int x:row_vector[i])
                count++;
            q = rowQ[i];
            
            if(q>=1){
                if((count%2)==0)
                    row_ans += (count/2);
                else
                    row_ans += ((count+1)/2);
            }
            else{
                if((count%2)==0)
                    row_ans += (count/2);
                else{
                    rflag = false;
                    break;
                }
            }
        }

        for(long int i=0;i<M;i++){
            long int count = 0;
            long int q = 0;
            if(colQ[i]==N)
                continue;
            for (long int x:col_vector[i])
                count++;
            q = colQ[i];
            
            if(q>=1){
                if((count%2)==0)
                    col_ans += (count/2);
                else
                    col_ans += ((count+1)/2);
            }
            else{
                if((count%2)==0)
                    col_ans += (count/2);
                else{
                    cflag = false;
                    break;
                }
            }
        }

        // Answer 

        if(rflag && cflag)
            cout<<min(row_ans,col_ans)<<endl;
        else if(rflag)
            cout<<row_ans;
        else if(cflag)
            cout<<col_ans;
        else
            cout<<"-1"<<endl;
    }


    return 0;
}