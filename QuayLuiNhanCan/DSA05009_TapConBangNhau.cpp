#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],check[100];
int s;
int checking;
int count;
void khoitao(){
    cin>>n;
    for(int i = 0 ;i<n;i++) cin>>a[i];
}
void Try(int sum,int ans){
    if(checking) return ;
    if(ans == 2){
        checking = 1;
        return ;
    }
    for(int j = 0 ;j<n;j++){
        if(check[j] == 0){
            check[j] = 1;
            if(sum == s){
                Try(0,ans + 1);
            }else if(sum < s){
                Try(sum + a[j],ans);
            }
        }
        check[j] = 0;
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        s = 0;
        s = accumulate(a,a+n,0);
        checking = 0;
        if(s % 2){
            cout<<"NO"<<endl;
        }else{
            s /= 2;
            Try(0,0);
            if(checking) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}