#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1001];
bool visited[1001];
int parent[1001];
int n,m;
int h;
bool DFS(int u,int par){
    visited[u] = true;
    for(int v : ve[u]){
        if(!visited[v]){
			parent[v] = u;
            if(DFS(v,u)){              
            return true;
            }
        }
        else if(v != par && v == 1){
			h = u;
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
    memset(parent,0,sizeof(parent));
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    for(int i = 1;i<=n;i++) sort(ve[i].begin(),ve[i].end());    
    if(DFS(1,0) == true){
		vector<int> res;
		cout<<1<<" ";
		while(h != 1){
			res.push_back(h);
			h = parent[h];
		}
		reverse(res.begin(),res.end());
		for(int x : res) cout<<x<<" ";
		cout<<1;
        res.clear();
        cout<<endl;
    }else cout<<"NO"<<endl;
    for(int i =1;i<=n;i++) ve[i].clear();
    }
    return 0;
}