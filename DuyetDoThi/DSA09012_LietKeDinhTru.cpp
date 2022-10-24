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
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(visited[i] == false){
            ans++;
            DFS(i);
        }
    }
    int k = 1;
    int check = 0;
    while(k <= n){
        int cnt = 0;
        memset(visited,false,sizeof(visited));
        visited[k] = true;
        for(int i = 1;i<=n;i++){
            if(visited[i] == false){
                cnt++;
                DFS(i);
            }
        }
        if(cnt > ans) cout<<k<<" ";
        k++;
    }
    cout<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}