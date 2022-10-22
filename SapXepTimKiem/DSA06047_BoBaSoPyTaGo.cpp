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
        for(int i = 0;i<n;i++){
            cin>>a[i];
            a[i] *= a[i];
        }
        sort(a,a+n);
        int check = 0;
        for(int i = n - 1;i>=2;i--){
            int l = 0;
            int r = i - 1;
            while(l < r){
                if(a[l] + a[r] == a[i]){
                    check = 1;
                    break;
                }else if(a[l] + a[r] > a[i]){
                    r--;
                }else{
                    l++;
                }
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}   