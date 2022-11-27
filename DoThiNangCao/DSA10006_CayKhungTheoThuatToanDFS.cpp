#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
int n,m,s;
vector<int> ve[100005];
bool visited[1005];
vector<pair<int,int>> vp;
void DFS(int u){
    visited[u] = true;
    for(int x : ve[u]){
        if(!visited[x]){
            vp.push_back({u,x});
            DFS(x);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>s;
        memset(visited,false,sizeof(visited));
        for(int i = 1;i<=m;i++){
            int u,v;
            cin>>u>>v;
            ve[u].push_back(v);
            ve[v].push_back(u);
        }
        DFS(s);
        if(vp.size() == n - 1){
            for(pair<int,int> x : vp) cout<<x.first<<" "<<x.second<<endl;
        }else cout<<-1<<endl;
        vp.clear();
        for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}