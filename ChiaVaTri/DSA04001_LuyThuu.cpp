#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;
ll SoMu(ll a,ll b){
    if(b == 0) return 1;
    ll tmp = SoMu(a,b/2);
    if(b % 2 == 1) return tmp % mod * tmp % mod % mod * a % mod % mod;
    else return tmp % mod * tmp % mod % mod; 
}
int main (){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<(ll)SoMu(a,b)<<endl;
    }
    return 0;
}