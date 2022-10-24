#include <bits/stdc++.h>
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int parent[1001];
int n,m,s,t;
void DFS(int u){
    visited[u] = true;
    for(int i = 0;i<ve[u].size();i++){
        if(visited[ve[u][i]] == false){
            DFS(ve[u][i]);
            parent[ve[u][i]] = u;
        }
    }
}
int main (){
    fast();
    int k;
    cin>>k;
    while(k--){
    cin>>n>>m>>s>>t;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    memset(visited,false,sizeof(visited));
    for(int i = 1;i<=n;i++) sort(ve[i].begin(),ve[i].end());
    DFS(s);
    if(visited[t]){
        vector<int> res;
        while(t != s){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(),res.end());
        for(int x : res) cout<<x<<" ";
    }else cout<<-1;
    cout<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}