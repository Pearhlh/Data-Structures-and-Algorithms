#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll a[],ll l[],ll r[],ll m){
    stack<ll> st1,st2;
    st1.push(m-1);
    for(int i = m - 1;i>=0;i--){
        while(!st1.empty() && a[i] <= a[st1.top()]) st1.pop();
        if(!st1.empty()) r[i] = st1.top() - 1;
        else r[i] = m - 1;
        st1.push(i);
    }
    for(int i = 0 ;i<m;i++){
        while(!st2.empty() && a[i] <=a[st2.top()]) st2.pop();
        if(!st2.empty()) l[i] = st2.top() + 1;
        else l[i] = 0;
        st2.push(i);
    }
    ll ans = 0;
    for(int i = 0 ;i<m;i++){
        ans = max(ans,(ll)(r[i] - l[i] + 1) * a[i]);
    }
    return ans;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    ll n,m;
    cin>>n>>m;
    ll a[n+1][m+1];
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll tmp[n+1][m+1];
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            if(i == 0) tmp[i][j] = a[i][j];
            else if(a[i][j]) tmp[i][j] = tmp[i-1][j] + a[i][j];
            else tmp[i][j] = 0;
        }
    }
    ll l[m+1],r[m+1];
    ll ans = 0;
    for(int i = 0 ;i<n;i++){
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));
        ans = max(ans,sum(tmp[i],l,r,m));
    }
    cout<<ans<<endl;
    }
    return 0;
}