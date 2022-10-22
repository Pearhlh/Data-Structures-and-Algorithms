#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    ll f[s.size() + 2];
    memset(f,0,sizeof(0));
    f[0] = s[0] - '0';
    for(int i = 1 ;i<s.size();i++){
        f[i] = f[i-1]*10 + (s[i] - '0') * (i+1); 
    }
    ll ans = 0;
    for(int i = 0 ;i<s.size();i++) ans += f[i];
    cout<<ans<<endl;
    }
    return 0;
}