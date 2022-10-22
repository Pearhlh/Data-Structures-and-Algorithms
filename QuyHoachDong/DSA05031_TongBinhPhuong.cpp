#include <bits/stdc++.h>
using namespace std;

int main (){
     int t;
     cin>>t;
     while(t--){
     int n;
     cin>>n;
     int a[105];
     for(int i = 1;i<=sqrt(n);i++) a[i] = i * i;
     vector<int> f(n+1,1e9);
     f[0] = 0 ;
     for(int i = 1;i<=sqrt(n);i++){
          for(int j = 0;j<=n;j++){
               if(j >= a[i]){
                    f[j] = min(f[j - a[i]] + 1,f[j]);
               }
          }
     }
     cout<<f[n]<<endl;
     }
     return 0;
}