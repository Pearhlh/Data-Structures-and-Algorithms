#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;
ll gt[1000];
void giaithua(){
    gt[0] = 1;
    for(int i = 1;i<=1000;i++){
        gt[i] = gt[i-1] *i % mod;
    }
}
ll powmod(ll a,ll b){
    if(b == 0) return 1;
    ll tmp = powmod(a,b/2);
    if(b % 2 == 1) return tmp % mod * tmp  % mod % mod * a % mod  % mod;
    else return tmp % mod * tmp % mod % mod;
}
int main (){
    giaithua();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll tmp = gt[n];
        ll tmp2 = gt[n-k] % mod * gt[k] % mod % mod;
        ll tmp3 = powmod(tmp2,mod - 2);
        cout<<tmp % mod * tmp3 % mod % mod <<endl;
    }   
    return 0;
}