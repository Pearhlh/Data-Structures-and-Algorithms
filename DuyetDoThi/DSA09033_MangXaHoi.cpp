#include <bits/stdc++.h>
using namespace std;
vector<int> ve[100001];
bool visited[100001];
int n,m;
bool DFS(int u){
    visited[u] = true;
    for(int v : ve[u]){
        if(!visited[v]){
            if(ve[v].size() != ve[u].size()) return false;
        }
    }
    return true;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(visited,false,sizeof(visited));
        for(int i = 1;i<=m;i++){
            int u,v;
            cin>>u>>v;
            ve[u].push_back(v);
            ve[v].push_back(u);
        }
        int check = 1;
        for(int i = 1;i<=n;i++){
            if(!visited[i]){
                if(DFS(i) == false) check = 0;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}