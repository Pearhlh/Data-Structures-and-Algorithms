#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int degree[1001];
int n,m;
vector<int> vp;
void Kahn(){
    queue<int> qe;
    for(int i = 1;i<=n;i++){
        if(degree[i] == 0) qe.push(i);
    }
    while(!qe.empty()){
        int u = qe.front();
        qe.pop();
        vp.push_back(u);
        for(int i = 0;i<ve[u].size();i++){
            degree[ve[u][i]]--;
            if(degree[ve[u][i]] == 0) qe.push(ve[u][i]);
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    memset(degree,0,sizeof(degree));
    memset(visited,false,sizeof(visited));
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        degree[v]++;
    }
    Kahn();
    if(vp.size() != n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int i = 1;i<=n;i++) ve[i].clear();
    vp.clear();
    }
    return 0;
}