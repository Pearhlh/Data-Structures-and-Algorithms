#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        map<int,int> mp;
        vector<pair<int,int>> v;
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it : mp) v.push_back({it.first,it.second});
        sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.second != b.second) return a.second < b.second;
        });
        int k = v[v.size()- 1].second;
        if(k > n/2){
            for(int i = 0;i<v.size();i++){
                if(v[i].second == k){
                    cout<<v[i].first<<" ";
                }
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}