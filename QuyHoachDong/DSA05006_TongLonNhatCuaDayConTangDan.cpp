#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        ll f[n+1];
        for(int i = 0 ;i<n;i++) f[i] = a[i];
        for(int i = 1;i<n;i++){
            for(int j = i - 1;j>=0;j--){
                if(a[i] > a[j]){
                    f[i] = max(f[j] + a[i],f[i]);
                }
            }
        }
        cout<<*max_element(f,f+n)<<endl;
    }
    return 0;
}