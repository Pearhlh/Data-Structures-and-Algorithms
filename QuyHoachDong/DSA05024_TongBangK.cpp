#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,s;
    cin>>n>>s;
    int a[n+1];
    for(int i = 0 ;i<n;i++) cin>>a[i];
    int f[s+1];
    memset(f,0,sizeof(f));
    f[0] = 1 ;
    for(int j = 1;j<=s;j++){
        for(int i = 0;i<n;i++){
            if(j >= a[i]){
                f[j] += f[j- a[i]];
                f[j] %= mod;
            }
        }
    }
    cout<<f[s]<<endl;
    }
    return 0;
}