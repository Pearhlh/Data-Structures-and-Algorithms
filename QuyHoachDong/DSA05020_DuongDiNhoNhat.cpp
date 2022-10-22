#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5];
    memset(a,0,sizeof(a));
    for(int i = 1 ;i<=n;i++){
        for(int j = 1 ;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(i == 1) a[i][j] = a[i][j-1] + a[i][j];
            else if(j == 1) a[i][j] = a[i-1][j] + a[i][j];
            else a[i][j] = min({a[i-1][j],a[i][j-1],a[i-1][j-1]}) + a[i][j];
        }
    }
    cout<<a[n][m]<<endl;
    }
    return 0;
}