#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+2];
        ll b[n+2];
        map<ll,ll> mp;
        for(int i = 1 ;i<=n;i++){
            cin>>a[i];
            mp[a[i]]++;
        } 
        for(int i = 1 ;i<n;i++){
            cin>>b[i];
            mp[b[i]]--;
        } 
        int vitri;
        for(int i = n;i>=1;i--){
            if(mp[a[i]]){
                cout<<i<<" ";
                mp[a[i]] = 0;
            }
        }
        cout<<endl;
    }
    return 0;
}