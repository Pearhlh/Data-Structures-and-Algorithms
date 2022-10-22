#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,s;
    cin>>n>>s;
    int a[n+1];
    for(int i = 0;i<n;i++) cin>>a[i];
    bool f[s+1];
    memset(f,false,sizeof(f));
    f[0] = true;
    for(int i = 0;i<n;i++){
        for(int j = s;j>=a[i];j--){
            if(f[j-a[i]]){
                f[j] = true;
            }
        }
    }
    if(f[s]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}