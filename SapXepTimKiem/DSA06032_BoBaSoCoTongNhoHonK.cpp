#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll cnt = 0;
        for(int i = 0 ;i<n-2;i++){
            if(a[i] >= k) break;
                for(int j = i + 1;j<n-1;j++){
                    auto l = lower_bound(a + j + 1,a+n,k - a[i] - a[j]);
                    l--;
                    cnt += (l - a) - j;
                }   
            }
        cout<<cnt<<endl;
    }
    return 0;
}   