#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int Start[n],Finish[n];
    vector<pair<int,int>> v;
    for(int i = 0 ;i<n;i++){
        cin>>Start[i];
    }
    for(int i = 0 ;i<n;i++){
        cin>>Finish[i];
    }
    for(int i = 0 ;i<n;i++) v.push_back({Start[i],Finish[i]});
    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
        if(a.second != b.second) return a.second < b.second;
    });
    int ans = 1;
    int kt = v[0].second;
    for(int i = 1;i<n;i++){
        if(v[i].first >= kt){
            ans++;
            kt = v[i].second;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}