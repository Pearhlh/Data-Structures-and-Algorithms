#include <bits/stdc++.h>
#define ll long long
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main (){
    fast();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1][n+1];
        memset(a,0,sizeof(a));
        for(int i = 1;i<=k;i++){
            int u,v;
            cin>>u>>v;
            a[u][v] = 1;
        }
        for(int i = 1;i<=n;i++){
            cout<<i<<": ";
            for(int j = 1;j<=n;j++){
                if(a[i][j] == 1) cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    return 0;   
}