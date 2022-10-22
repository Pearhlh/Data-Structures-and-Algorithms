#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
int ans = INT_MAX;
int check;
void khoitao(){
    cin>>n>>k;
    for(int i = 0 ;i<n;i++) cin>>a[i];
}
void Try(int sum,int i,int pos){
    if(sum == k){
        ans = min(i,ans);
        check = 1;
    }
    for(int j = pos;j<n;j++){
        if(sum + a[j] <= k){
            Try(sum + a[j],i+1,j+1);
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
    khoitao();
    sort(a,a+n);
    check = 0;
    Try(0,0,0);
    if(check) cout<<ans<<endl;
    else cout<<-1<<endl;
    }
    return 0;
}