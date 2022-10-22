#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int f[n+1];
        memset(f,0,sizeof(f));
        f[0] = 1;
        for(int j = 1;j<=n;j++){
            for(int i = 1;i<=k;i++){
                if(j >= i){
                    f[j] += f[j  - i];
                    f[j] %= mod;
                }
            }
        }
        cout<<f[n]<<endl;
    }
    return 0;
}