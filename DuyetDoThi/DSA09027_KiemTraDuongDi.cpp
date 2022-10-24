#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int n,m;
int f[1001];
int ans;
void DFS(int u){
    visited[u] = true;
    f[u] = ans;
    for(int i = 0;i<ve[u].size();i++){
        if(visited[ve[u][i]] == false){
            DFS(ve[u][i]);
        }
    }
}
int main (){
    int k;
    cin>>k;
    while(k--){
    cin>>n>>m;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    memset(visited,false,sizeof(visited));
    ans = 0;
    for(int i = 1;i<=n;i++){
        if(visited[i] == false){
            ans++;
            DFS(i);
        }
    }
    int q;  cin>>q;
    while(q--){
        int s,t;
        cin>>s>>t;
        if(f[s] == f[t]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}