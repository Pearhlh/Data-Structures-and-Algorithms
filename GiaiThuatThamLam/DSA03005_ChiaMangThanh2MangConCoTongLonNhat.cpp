#include <bits/stdc++.h>
#define ll long long
using namespace std;;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        ll sum1 = 0;
        ll sum2 = 0;
        for(int i = 0 ;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i = 0 ;i<min(k,n-k);i++) sum1 += a[i];
        for(int i = min(k,n-k);i<n;i++) sum2 += a[i];
        cout<<abs(sum1-sum2)<<endl;
    }
    return 0;
}