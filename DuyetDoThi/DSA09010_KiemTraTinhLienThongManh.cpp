#include <bits/stdc++.h>
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int n,m;
void BFS(int u){
    queue<int> qe;
    qe.push(u);
    visited[u] = true;
    while(!qe.empty()){
        int k = qe.front();
        qe.pop();
        for(int i = 0;i<ve[k].size();i++){
            if(visited[ve[k][i]] == false){
                qe.push(ve[k][i]);
                visited[ve[k][i]] = true;
            }
        }

    }
}
bool check(){
    for(int i = 1;i<=n;i++){
        if(visited[i] == false) return false;
    }
    return true;
}
int main (){
    fast();
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
    }
    int checking = 1;
    for(int i = 1;i<=n;i++){
        memset(visited,false,sizeof(visited));
        BFS(i);
        if(check() == false){
            checking = 0;
            break;
        }       
    }
    if(checking) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    }
    return 0;
}