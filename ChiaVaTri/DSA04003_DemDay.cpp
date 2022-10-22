#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 123456789;

ll powMod(ll a , ll b)
{
    if(b == 0) return 1;
    if(b == 1) return a;
    ll tmp = powMod(a , b / 2);
    if(b % 2)
        return (tmp % mod) * (tmp % mod) % mod * (a % mod) % mod;
    else return (tmp % mod) * (tmp % mod) % mod;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    cout<<powMod(2,n-1)<<endl;
    }
    return 0;
}