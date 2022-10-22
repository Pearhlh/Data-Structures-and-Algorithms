#include <bits/stdc++.h>
using namespace std;

int main (){
     int n;
     cin>>n;
     int a[n+1];
     for(int i = 0 ;i<n;i++) cin>>a[i];
     vector<string> v;
     for(int i = 0 ;i<n-1;i++){
        string s = "";
        s += "Buoc " + to_string(i+1) + ": ";
          int vitri = i;
          int min = a[i];
          for(int j = i + 1;j<n;j++){
               if(a[j] < min){
                    vitri = j;
                    min = a[j];
               }
          }
          swap(a[vitri],a[i]);
          for(int i = 0;i<n;i++) s += to_string(a[i]) + " ";
          v.push_back(s);
     }
     for(int i = v.size() - 1;i>=0;i--) cout<<v[i]<<endl;
     return 0;
}