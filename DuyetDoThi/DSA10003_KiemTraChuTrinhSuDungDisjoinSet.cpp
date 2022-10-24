#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int n,m;
bool DFS(int u,int par){
    visited[u] = true;
    for(int v : ve[u]){
        if(!visited[v]){
            if(DFS(v,u)){              
            return true;
            }
        }
        else if(v != par){
            return true;
        }
    }
	return false;
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
    int check = 0;
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            if(DFS(i,0) == true) check = 1;
        }
    }
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}