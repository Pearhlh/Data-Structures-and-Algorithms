#include <bits/stdc++.h>
using namespace std;
int check(int a[],int n,int k){
    int l = 1;
    int r = n;
    while(l <= r){
        int mid = (l + r)/2;
        if(a[mid] == k) return mid;
        else if(a[mid] > k){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return 0;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i = 1 ;i<=n;i++) cin>>a[i];
        if(check(a,n,k)){
            cout<<check(a,n,k)<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}