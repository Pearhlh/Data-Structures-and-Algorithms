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
        ll Minx = INT_MAX;
        for(int i = 0 ;i<n-1;i++){
           for(int j = i + 1;j<n;j++){
               if(abs(Minx) > abs(a[i] + a[j])){
                    Minx = a[i] + a[j];
               }
           }
        }
        cout<<Minx<<endl;
    }
    return 0;
}