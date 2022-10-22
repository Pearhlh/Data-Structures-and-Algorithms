#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll f[n+1];
        memset(f,0,sizeof(f));
        f[0] = 1;
        for(int j = 1;j<=n;j++){
            for(int i = 1;i<=3;i++){
                if(j >= i){
                    f[j] += f[j  - i];
                }
            }
        }
        cout<<f[n]<<endl;
    }
    return 0;
}