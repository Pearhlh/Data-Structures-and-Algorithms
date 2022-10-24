#include <bits/stdc++.h>
using namespace std;
int hy[8] = {-1,-1,-1,0,0,1,1,1};
int hx[8] = {-1,0,1,-1,1,-1,0,1};
int a[501][501];
int n,m;
void DFS(int u,int v){
    a[u][v] = 0;
    for(int i = 0;i<8;i++){
        int x = u + hx[i];
        int y = v + hy[i];
        if(x >= 0 && x <= n - 1 && y >= 0 && y <= m - 1 && a[x][y] == 1){
            DFS(x,y);
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(a[i][j]){
                    DFS(i,j);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}