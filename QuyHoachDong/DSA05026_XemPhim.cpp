#include <bits/stdc++.h>
using namespace std;

int main (){
   int w,n;
   cin>>w>>n;
   int a[n+1];
   for(int i = 1 ;i<=n;i++) cin>>a[i];
   int f[n+1][w+1];
   memset(f,0,sizeof(f));
   for(int i = 1;i<=n;i++){
      for(int j = 0;j<= w;j++){
         f[i][j] = f[i-1][j];
         if(j >= a[i]){
            f[i][j] = max(f[i][j],f[i-1][j - a[i]] + a[i]);
         } 
      }
   }
   cout<<f[n][w]<<endl;
}