#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll crossum(int a[],int l,int m,int r){
    ll left = LLONG_MIN;
    ll sum = 0;
    for(int i = m;i>=l;i--){
        sum += a[i];
        if(sum > left){
            left = sum;
        }
    }
    ll right = LLONG_MIN;
    sum = 0;
    for(int i = m + 1;i<=r;i++){
        sum += a[i];
        if(sum > right){
            right = sum;
        }
    }
    return max({left,right,left + right});
}
ll solve(int a[],int l,int r){
    if(l > r) return LLONG_MIN;
    if(l == r) return a[l];
    int mid = (l + r)/2;
    return max({solve(a,l,mid),solve(a,mid+1,r),crossum(a,l,mid,r)}); 
}
int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(a,0,n-1)<<endl;
    }
    return 0;
}