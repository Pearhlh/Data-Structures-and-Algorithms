#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int n,m;
void DFS(int u){
    visited[u] = true;
    for(int i = 0;i<ve[u].size();i++){
        if(visited[ve[u][i]] == false){
            DFS(ve[u][i]);
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    memset(visited,false,sizeof(visited));
    int count = 0;
    for(int i = 1;i<=n;i++){
        if(visited[i] == false){
            count++;
            DFS(i);
        }
    }
    cout<<count<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
}