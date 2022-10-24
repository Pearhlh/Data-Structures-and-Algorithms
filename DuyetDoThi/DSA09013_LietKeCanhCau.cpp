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
    vector<pair<int,int>> vp;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
        vp.push_back({u,v});
    }
    memset(visited,false,sizeof(visited));
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(visited[i] == false){
            ans++;
            DFS(i);
        }
    }
    for(int i = 1;i<=n;i++) ve[i].clear();
    int k = 0;
    int check = 0;
    while(k < vp.size()){
        for(int i = 0;i<vp.size();i++){
            if(i != k){
                ve[vp[i].first].push_back(vp[i].second);
                ve[vp[i].second].push_back(vp[i].first);
            }
        }
        memset(visited,false,sizeof(visited));
        int cnt = 0;
        for(int i = 1;i<=n;i++){
            if(visited[i] == false){
                cnt++;
                DFS(i);
            }
        }
        if(cnt > ans){
            cout<<vp[k].first<<" "<<vp[k].second<<" ";
        }
        k++;
        for(int i = 1;i<=n;i++) ve[i].clear();
    }
    cout<<endl;
    }
    return 0;
}