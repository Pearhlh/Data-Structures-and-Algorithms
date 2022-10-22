#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i =  n - 1;i>n-k-1;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}