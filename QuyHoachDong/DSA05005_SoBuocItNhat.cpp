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
   for(int i = 0 ;i<n;i++) f[i] = 1;
   for(int i = 1;i<n;i++){
      for(int j = i - 1;j>=0;j--){
         if(a[i] >= a[j]){
            f[i] = max(f[i],f[j] + 1);
         }
      }
   }
   sort(f,f+n);
   cout<<n - f[n-1]<<endl;
   }
}