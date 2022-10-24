    #include <bits/stdc++.h>
    using namespace std;
    vector<int> ve[1001];
    bool visited[1001];
    int k,n,m;
    map<int,int> mp;
    void DFS(int u){
        mp[u]++;
        visited[u] = true;
        for(int v : ve[u]){
            if(!visited[v]){
                DFS(v);
            }
        }
    }
    int main (){
            cin>>k>>n>>m;
            int a[k];
            for(int i = 1;i<=k;i++){
                cin>>a[i];
            }
            for(int i = 1;i<=m;i++){
                int u,v;
                cin>>u>>v;
                ve[u].push_back(v);
            }
            int cnt = 0;
            for(int i = 1;i<=k;i++){
                memset(visited,false,sizeof(visited));
                DFS(a[i]);
                
            }
            int ans = 0;
            for(int i = 1;i<=n;i++){
                if(mp[i] == k) ans++;
            }
            cout<<ans<<endl;
        return 0;
    }