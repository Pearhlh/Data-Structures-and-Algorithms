#include <bits/stdc++.h>
using namespace std;
int n,a[100],x[100],k;
void khoitao(){
    cin>>n>>k;
    for(int i = 0 ;i<n;i++) cin>>a[i];
}
void Try(int pos,int count){
    if(count == k ){
        for(int j = 0;j<count;j++) cout<<x[j]<<" ";
        cout<<endl;
    }
    for(int j = pos;j<n;j++){
        x[count] = a[j];
        Try(j+1,count + 1);
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        memset(x,0,sizeof(x));
        sort(a,a+n);
        Try(0,0);
    }
}