#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    ll a[n+1];
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll Max = 0;
    for(int i = 0;i<n;i++){
        Max += a[i] * i;
        Max %= mod;
    }
    cout<<Max<<endl;
    }
    return 0;
}