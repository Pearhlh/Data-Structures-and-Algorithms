#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size() > n){
    map<char,int> mp;
    for(char i : s) mp[i]++;
    priority_queue<ll> Q;
    for(auto it : mp) Q.push(it.second);
    while(n){
        ll tmp = Q.top();
        tmp -= 1;
        n -= 1;
        Q.pop();
        Q.push(tmp);
    }
    ll ans = 0;
    while(Q.size()){
        ans += pow(Q.top(),2);
        Q.pop();
    } 
    cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }
    }
    return 0;
}