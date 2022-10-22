#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        vector<int> v;
        for(int i = 0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        if(n % 2){
            for(int i = 0;i<n/2;i++){
                cout<<v[n-i-1]<<" "<<v[i]<<" ";
            }
            cout<<v[n/2]<<endl;
        }else{
            for(int i = 0 ;i<n/2;i++){
                cout<<v[n-i-1]<<" "<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}