#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i = 0;i<n;i++) cin>>a[i];
    priority_queue<ll,vector<ll>,greater<ll>> Q;
    for(int i = 0;i<n;i++) Q.push(a[i]);
    ll ans = 0;
    while(Q.size() >= 2){
        ll tmp = 0;
        tmp += Q.top();
        Q.pop();
        tmp += Q.top();
        Q.pop();
        ans += tmp;
        Q.push(tmp);
    }
    cout<<ans<<endl;
    }
    return 0;
}