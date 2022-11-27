#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
int n,m;
int s,t,u,v;
char c[505][505];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
bool visited[505][5005];
struct Path{
    int x,y,cnt;
};
bool BFS(int s,int t,int cnt){
    queue<Path> qe;
    qe.push({s,t,cnt});
    visited[s][t] = true;
    while(!qe.empty()){
        Path top = qe.front();
        qe.pop();
        if(top.x == u && top.y == v && top.cnt <= 3) return true; 
        if(top.cnt >= 4) continue;
        for(int k = 0;k<4;k++){
            int x1 = top.x + dx[k];
            int y1 = top.y + dy[k];
            while(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && !visited[x1][y1]  && c[x1][y1] != '*' ){
                visited[x1][y1] = true;
                qe.push({x1,y1,top.cnt + 1});
                x1 = x1 + dx[k];
                y1 = y1 + dy[k];
            }
        }
    }
    return false;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n>>m;
        memset(visited,false,sizeof(visited));
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                cin>>c[i][j];
                if(c[i][j] == 'S'){
                    s = i;
                    t = j;
                }else if(c[i][j] == 'T'){
                    u = i;
                    v = j;
                }
            }
        }
        if(BFS(s,t,0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}