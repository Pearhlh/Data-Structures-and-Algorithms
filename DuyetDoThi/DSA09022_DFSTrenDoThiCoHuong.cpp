#include <bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> ve[1001];
void DFS(int u){
    cout<<u<<" ";
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
    int n,m,s;
    cin>>n>>m>>s;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
    }
    memset(visited,false,sizeof(visited));
    /*for(int i = 1;i<=n;i++){
        sort(ve[i].begin(),ve[i].end());
    }*/
    DFS(s);
    for(int i = 1;i<=n;i++){
        ve[i].clear();
    }
    cout<<endl;
    }
    return 0;
}