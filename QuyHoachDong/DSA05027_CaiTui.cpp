#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,s;
    cin>>n>>s;
    int w[n+1],v[n+1];
    for(int i = 1;i<=n;i++) cin>>w[i];
    for(int i = 1 ;i<=n;i++) cin>>v[i];
    int a[n+1][s+1];
    memset(a,0,sizeof(a));
    for(int i = 1 ;i<=n;i++){
        for(int j = 0;j<=s;j++){
                a[i][j] = a[i-1][j];
                if(j >= w[i]){
                    a[i][j] = max(a[i][j],a[i-1][j - w[i]] + v[i]);
                }
        }
    }
    cout<<a[n][s]<<endl;
    }
    return 0;
}
