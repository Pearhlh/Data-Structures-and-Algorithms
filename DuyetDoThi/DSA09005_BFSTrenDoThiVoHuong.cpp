#include <bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> ve[1001];
void DFS(int u){
    queue<int> qe;
    qe.push(u);
    visited[u] = true;
    while(!qe.empty()){
        int u = qe.front();
        cout<<u<<" ";
        for(int i = 0;i<ve[u].size();i++){
            if(visited[ve[u][i]] == false){
                qe.push(ve[u][i]);
                visited[ve[u][i]] = true;
            }
        }
        qe.pop();
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
        ve[v].push_back(u);
    }
    memset(visited,false,sizeof(visited));
    for(int i = 1;i<=n;i++){
        sort(ve[i].begin(),ve[i].end());
    }
    DFS(s);
    for(int i = 1;i<=n;i++) ve[i].clear();
    cout<<endl;
    }
    return 0;
}