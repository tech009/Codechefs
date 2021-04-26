#include <bits/stdc++.h>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void BFS(vector<int> adj[], int V, int strtNode){
    vector<int> dist(V+1, -1);
    dist[strtNode] = 0;
    queue<int> node;
    node.push(strtNode);
    while(!node.empty()){
        int x = node.front();
        for(int i=0; i<adj[x].size(); i++){
            if(dist[adj[x][i]] == -1){
                dist[adj[x][i]] = dist[x] + 1;
                node.push(adj[x][i]);
            }
        }
        node.pop();
    }

    for(int i=1; i<=V; i++)
        if(dist[i]==0)
            continue;
        else if(dist[i]==-1)
            cout<<dist[i]<<" ";
        else
            cout<<((dist[i])*6)<<" ";
    cout<<endl;
}

int main(void){

    int q;
    cin>>q;
    while(q--){
        int n,m;
        cin>>n>>m;

        vector<int> adj[n+1];
        for(int i=0; i<m; i++){
            int a, b;
            cin>>a>>b;
            addEdge(adj, a, b);
        }

        int startNode;
        cin>>startNode;

        BFS(adj, n, startNode);


    }
    return 0;
}