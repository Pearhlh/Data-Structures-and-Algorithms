#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int a[n+1],b[m+1];
        for(int i = 0 ; i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i = 0 ;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}