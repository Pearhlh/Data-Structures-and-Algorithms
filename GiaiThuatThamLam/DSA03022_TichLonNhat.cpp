#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int n;
    cin>>n;
    ll a[n+1];
    for(int i = 0 ;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll ans = max(a[n-1]*a[n-2]*a[n-3],a[n-1]*a[n-2]);
    ll count = max(a[0]*a[1],a[0]*a[1]*a[n-1]);
    cout<<max(ans,count)<<endl;
    return 0;
}
