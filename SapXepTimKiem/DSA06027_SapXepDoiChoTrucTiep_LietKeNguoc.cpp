#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0 ; i<n;i++) cin>>a[i];
    vector<string> v;
    for(int i = 0 ;i<n-1;i++){
        string s = "";
        for(int j = i + 1;j<n;j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
        s += "Buoc " + to_string(i+1) + ": ";
        for(int k = 0;k<n;k++) s += to_string(a[k]) + " ";
        v.push_back(s);
    }
    for(int i = v.size() - 1;i>=0;i--) cout<<v[i]<<endl;
    }
    return 0;
}