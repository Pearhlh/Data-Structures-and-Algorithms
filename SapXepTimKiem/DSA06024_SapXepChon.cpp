#include <bits/stdc++.h>
using namespace std;

int main (){
     int n;
     cin>>n;
     int a[n+1];
     for(int i = 0 ;i<n;i++) cin>>a[i];
     for(int i = 0 ;i<n-1;i++){
          cout<<"Buoc"<<" "<<i+1<<": ";
          int vitri = i;
          int min = a[i];
          for(int j = i + 1;j<n;j++){
               if(a[j] < min){
                    vitri = j;
                    min = a[j];
               }
          }
          swap(a[vitri],a[i]);
          for(int i = 0;i<n;i++) cout<<a[i]<<" ";
          cout<<endl;
     }
     return 0;
}