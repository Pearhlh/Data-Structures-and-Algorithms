#include <bits/stdc++.h>
using namespace std;
int n,a[100],x[100];
vector<int> tmp;
vector<vector<int>> v;
void khoitao(){
    cin>>n;
    for(int i = 0 ;i<n;i++) cin>>a[i];
}
void Try(int pos,int count,int sum){
    if(count >= 1 && sum % 2){
        for(int j = count - 1 ;j>=0;j--) tmp.push_back(x[j]);
        v.push_back(tmp);
        tmp.clear();
    }
    for(int j = pos;j<n;j++){
        x[count] = a[j];
        Try(j+1,count + 1,sum + x[count]);
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sort(a,a+n);
        Try(0,0,0);
        sort(v.begin(),v.end());
        for(vector<int> x : v){
            for(int j : x) cout<<j<<" ";
            cout<<endl;
        }
        v.clear();
        tmp.clear();
    }
}