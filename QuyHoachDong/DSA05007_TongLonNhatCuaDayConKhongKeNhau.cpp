#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        int f[n+1];
        f[0] = a[0];
        f[1] = max(a[0],a[1]);
        for(int i = 2;i<n;i++){
            f[i] = max(f[i-1],f[i-2] + a[i]);
        }
        cout<<f[n-1]<<endl;
    }
    return 0;   
}