#include <bits/stdc++.h>
#define ll long long
using namespace std;
char solve(ll n,ll k){
    if(k%2 == 1) return 'A';
    ll lt = (ll)pow(2,n-1);
    if(k == lt) return 'A' + n - 1;
    if(k < lt) return solve(n-1,k);
    else return solve(n-1, k - lt);
}
int main (){
    int t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
    }
    return 0;
}