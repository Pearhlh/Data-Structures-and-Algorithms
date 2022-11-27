#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[105][105];
void khoitao(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++)
            a[i][j] = 1e9;
        a[i][i] = 0;
    }
    for(int i = 1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        a[u][v] = a[v][u] = w;
    }
    for(int k = 1;k<=n;k++){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                if(a[i][j] > a[i][k] + a[k][j]){
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }    
}
int main()
{
    khoitao();
    int t;
    cin>>t;
    while(t--){
        int u,v;
        cin>>u>>v;
        cout<<a[u][v]<<endl;
    }
    return 0;
}