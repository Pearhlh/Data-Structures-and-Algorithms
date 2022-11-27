#include <bits/stdc++.h>
#define ll long long
#define ll long long
using namespace std;
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int n,m;
bool visited[505][505] = {false};
ll a[505][505];
struct path{
    ll x,y,cnt;
};
struct cmp{

    bool operator() (path a,path b) {return a.cnt > b.cnt;}

};  
void nhap(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    memset(visited,false,sizeof(visited));
}
ll BFS(){
    priority_queue<path,vector<path>,cmp> qe;
    qe.push({1,1,a[1][1]});
    visited[1][1] = true;
    while(!qe.empty()){
        path top = qe.top();
        if(top.x == n && top.y == m){
            return top.cnt;
        }
        qe.pop();
        for(int k = 0;k<4;k++){
            int x = top.x + dx[k];
            int y = top.y + dy[k];
            if(x >= 1 && x <= n && y >= 1 && y <= m && !visited[x][y]){
                qe.push({x,y,top.cnt + a[x][y]});
                visited[x][y] = true;
            }   
        }
    }
    return -1;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    nhap();
    cout<<BFS()<<endl;
    }
}