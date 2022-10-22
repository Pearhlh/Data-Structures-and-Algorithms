#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
ll powmod(ll a, ll b){
    if(b == 0) return 1;
    ll tmp = powmod(a,b/2);
    if(b % 2) return tmp % mod * tmp % mod % mod * a % mod % mod;
    else return tmp % mod * tmp % mod % mod;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    string b = "";
    for(int i = a.size() - 1 ;i>=0;i--) b += a[i];
    cout<<powmod(stoll(a),stoll(b))<<endl;
    }
    return 0;
}