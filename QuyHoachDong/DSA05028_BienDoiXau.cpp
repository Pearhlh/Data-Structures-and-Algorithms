#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    string s,t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();
    s = " " + s;
    t = " " + t;
    int f[n+1][m+1];
    memset(f,0,sizeof(f));
    for(int i = 1;i<=n;i++){
        f[i][0] = i;
    }
    for(int i = 1;i<=m;i++){
        f[0][i] = i;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(s[i] == t[j]) f[i][j] = f[i-1][j-1];
            else{
                f[i][j] = min({f[i][j-1],f[i-1][j],f[i-1][j-1]}) + 1;
            }
        }
    }
    cout<<f[n][m]<<endl;
    }
    return 0;
}