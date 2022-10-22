#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int check = 0;
        for(int i = 0 ;i<n-2;i++){
            if(a[i] > k){
                break;
            }else{
                for(int j = i + 1;j<n-1;j++){
                    auto l = lower_bound(a + j + 1,a+n,k-a[i]- a[j]);
                    if(l != a + n){
                        if(*l == k - a[i] - a[j]){
                            check = 1;      
                        }
                    }
                }
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}