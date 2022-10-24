#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1001];
bool visited[1001];
void DFS1(int u){
    visited[u] = true;
    for(int v : ve[u]){
        if(!visited[v]){
            DFS1(v);
        }
    }
}
bool DFS2(int u,int par){
    visited[u] = true;
    for(int v : ve[u]){
        if(!visited[v]){
            if(DFS2(v,u)) return true;
        }else if(v != par) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    memset(visited,false,sizeof(visited));
    for(int i = 1;i<=n-1;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    DFS1(1);
    int check = 1;
    for(int i = 1;i<=n;i++){
        if(visited[i] == false){
            check = 0;
        }
    }
    if(check){
        memset(visited,false,sizeof(visited));
        if(DFS2(1,0) == true){
            check = 0;
        }
    }
    if(check)   cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}