#include <bits/stdc++.h>
using namespace std;
vector<int> ve[100001];
bool visited[100001];
int n,m;
int ans;
void DFS(int u){
    visited[u] = true;
    ans++;
    for(int v : ve[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
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
        int Max = INT_MIN;
        for(int i = 1;i<=n;i++){
            if(!visited[i]){
                ans = 0;
                DFS(i);
                Max = max(ans,Max);
            }
        }
        cout<<Max<<endl;
        for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}