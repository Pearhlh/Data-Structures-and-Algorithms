#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> v;
    int a[n+1];
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end());
    bool b[v[v.size() - 1]];
    for(int i = 0 ;i<n;i++){
        b[a[i]] = true;
    }
    b[k] = false;
    for(int i = 0;i<n;i++){
        if(b[a[i]]) cout<<a[i]<<" ";
    }
    cout<<endl;
}