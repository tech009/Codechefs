#include<bits/stdc++.h>
using namespace std;

const long long modulo = 1000000007;
vector<long long> tree[1000001];
long long src[1000001];
long long tgt[1000001];
long long connection[1000001];
long long a[1000001];
long long b[1000001];
long long parity[1000001];
long long hypo[1000001];
long long visited[1000001];
vector<long long> sset;
priority_queue<pair<long long, long long>> PQ;
long long n,s;
long long tmp;

void method1(long long superior, long long d){

    visited[superior]++;
    hypo[superior]=d;
    bool is_it=true;
    for(long long CHD: tree[superior]){
        if(!visited[CHD]){
            parity[CHD]=superior;
            method1(CHD,d+1);
            is_it=false;
        }
    }
    if(is_it==true)
        PQ.push({d,superior});
}

void complete(){
    for(long long i=0; i<n+1; i++)
    {
        tree[i].clear();
        a[i]=0;
        b[i]=0;
        parity[i]=0;
        hypo[i]=0;
    }
    while(!PQ.empty())
        PQ.pop();
}

void cleanSlate(long long superior){
    connection[a[superior]]=0;
    connection[b[superior]]=0;
    src[a[superior]]=0;
    tgt[a[superior]]=0;
    src[b[superior]]=0;
    tgt[b[superior]]=0;
}

int method2(long long superior){
    tgt[b[superior]]++;
    src[a[superior]]++;
    if(src[a[superior]]==tgt[a[superior]] && connection[a[superior]]!=0){
        connection[a[superior]]--;
        tmp--;
    }
    else if(connection[a[superior]]==0){
        connection[a[superior]]++;
        tmp++;
    }
    if(src[b[superior]]==tgt[b[superior]] && connection[b[superior]]!=0){
        connection[b[superior]]--;
        tmp--;
    }
    else if(connection[b[superior]]==0){
        connection[b[superior]]++;
        tmp++;
    }
    visited[superior]++;
    sset.push_back(superior);
    if(tmp==0){
        if(visited[parity[superior]]==0 && superior!=1)
            PQ.push(make_pair(hypo[parity[superior]],parity[superior]));
        cleanSlate(superior);
        return 1;
    }
    if(superior==1){
        cleanSlate(superior);
        return 0;
    }
    if(visited[parity[superior]]==0){
        if(method2(parity[superior])==1){
            cleanSlate(superior);
            return 1;
        }
    }
    cleanSlate(superior);
    return 0;
}

int solution(){
    cin>>n>>s;
    for(long long i=0;i<n-1;i++){
        long long u,v;
        cin>>u>>v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for(long long i=1;i<n+1;i++)
        cin>>a[i];
    for(long long i=1;i<n+1;i++){
        cin>>b[i];
        visited[i]=0;
        parity[i]=0;
        hypo[i]=0;
    }
    method1(1,1);
    for(long long i=1;i<n+1;i++)
        visited[i]=0;
    bool correct=true;
    vector<vector<long long>> sets;
    while(!PQ.empty()){
        pair<long long, long long> leaf = PQ.top();
        PQ.pop();
        if(visited[leaf.second]==0){
            tmp=0;
            sset.clear();
            if(method2(leaf.second)==0){
                correct=false;
                break;
            }
            else
                sets.push_back(sset);
        }
    }
    if(correct==false){
        cout<<0<<endl;
        return 0;
    }
    if(s==1){
        cout<<1<<endl;
        return 0;
    }
    long long a=1;
    long long x=sets.size();
    for(long long i=0;i<x;i++){
        long long u=sets[i][0];
        long long l=sets[i][0];
        long long sze=sets[i].size();
        for(long long j=1;j<sze;j++){
            if(hypo[sets[i][j]]>hypo[l])
                l=sets[i][j];
            if(hypo[sets[i][j]]<hypo[u])
                u=sets[i][j];
        }
        long long cnt=0;
        for(long long c: tree[l]){
            if(c!=parity[l])
                cnt++;
        }
        a=(a*(cnt+1))%modulo;
    }
    cout<<a<<endl;
    return 0;
}

int main(){

    long long testcases;
    cin>>testcases;
    while(testcases--){
        solution();
        complete();
    }
    return 0;
}