#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0 ;i<n;i++) cin>>a[i];
    ll ans = 0;
    for(int i = 0 ;i<n;i++){
        if(a[i] > 0){
            ans += a[i];
        }
    }
    cout<<ans * 2 << endl;
}