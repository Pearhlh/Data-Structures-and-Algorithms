#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<pair<int,int>> v;
        int a[n+1];
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],abs(x-a[i])});
        }
        stable_sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
            return a.second < b.second;
        });
        for(pair<int,int> k : v){
            cout<<k.first<<" ";
        }
        cout<<endl;
    }
    return 0;
}