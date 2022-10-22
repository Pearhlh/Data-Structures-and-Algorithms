#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],b[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        for(int i = 0 ;i<n;i++) cin>>b[i];
        ll count = 0;
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i = 0 ;i<n;i++){
            count += a[i] * b[i];
        }
        cout<<count<<endl;
    }
    return 0;
}