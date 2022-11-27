#include <bits/stdc++.h>
#define ll long long
using namespace std;
int parent[10005];
int size[10005];
int n,m;
struct Edge{
    int u,v,w;
};
vector<Edge> ve;
void Khoitao(){
    for(int i = 1;i<=n;i++){
        parent[i] = i;
        size[i] = 1;
    }
}
int Find(int u){
   if(u == parent[u]) return u;
   else return parent[u] = Find(parent[u]);
}
bool Union(int x ,int y){
    x  = Find(x);
    y  = Find(y);
    if(x == y) return false;
    if(size[x] <= size[y]){
        size[y] += size[x];
        parent[x] = y;
    }else{
        size[x] += size[y];
        parent[y] = x;
    }
    return true;
}
bool cmp(Edge a,Edge b){
    return a.w < b.w;
}
int main()
{   
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        Khoitao();
        for(int i = 0;i<m;i++){
            int x,y,w;
            cin>>x>>y>>w;
            ve.push_back({x,y,w});
        }
        sort(ve.begin(),ve.end(),cmp);
        vector<Edge> MST;
        int Min = 0;
        for(int i = 0 ;i<m;i++){
            if(MST.size() == n - 1) break;
            int x = ve[i].u, y = ve[i].v, w = ve[i].w;
            if(Union(x,y)){
                Min += w;
                MST.push_back(ve[i]);
            }
        }
        cout<<Min<<endl;
        ve.clear();
        MST.clear();
    }
    return 0;
}