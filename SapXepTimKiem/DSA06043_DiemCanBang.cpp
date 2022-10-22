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
        memset(f,0,sizeof(f));
        f[0] = a[0];
        for(int i = 1;i<n;i++){
            f[i] = f[i-1] + a[i];
        }
        ll tmp = accumulate(a,a+n,0);
        int check = 0;
        int Vitri;
        for(int i = 1;i<n-1;i++){
            if(f[i-1] == tmp - f[i-1] - a[i]){
                check = 1;
                Vitri = i + 1;
                break;
            }
        }
        if(check) cout<<Vitri<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}