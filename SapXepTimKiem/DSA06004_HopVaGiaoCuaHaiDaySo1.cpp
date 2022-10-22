#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1],b[m+1];
        map<int,int> mp;
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i = 0 ;i<m;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
        for(auto it : mp){
            cout<<it.first<<" ";
        }
        cout<<endl;
        for(auto it : mp){
            if(it.second == 2) cout<<it.first<<" ";
        }
        cout<<endl;
    }
    return 0;
}