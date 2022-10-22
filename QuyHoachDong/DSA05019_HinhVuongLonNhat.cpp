#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5];
    for(int i = 1 ;i<=n;i++){
        for(int j = 1 ;j<=m;j++){
            cin>>a[i][j];
        }
    }
    ll f[n+5][m+5];
    memset(f,0,sizeof(f));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(i == 1 || j == 1){
                f[i][j] = a[i][j];
            }
            else{
                if(a[i][j] == 1){
                    f[i][j] = min({f[i-1][j-1],f[i][j-1],f[i-1][j]}) + 1;
                }else f[i][j] = 0;
            }
        }
    }
    ll Max = LLONG_MIN;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++) Max = max(Max,f[i][j]);
    }
    cout<<Max<<endl;
    }
    return 0;
}