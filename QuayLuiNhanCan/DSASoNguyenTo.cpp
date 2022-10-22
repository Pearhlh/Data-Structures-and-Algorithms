#include <bits/stdc++.h>
using namespace std;
const int m = 1e5;
int nt[m];
int a[100];
int n,p,s;
int cnt;
int x[100];
vector<int> v;
vector<vector<int>> ve;
void khoitao(){
    cin>>n>>p>>s;
}
void sang(){
    for(int i = 0 ;i<=m;i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for(int i = 2;i<=sqrt(m);i++){
        if(nt[i]){
            for(int j = i *i ;j<=m;j += i){
                nt[j] = 0;
            }
        }
    }
}
void Try(int pos,int count,int sum){
    if(sum == s && count == n){
        for(int j = 0;j<count;j++) v.push_back(x[j]);
        ve.push_back(v);
        v.clear();
    }
    for(int j = pos;j<cnt;j++){
        if(sum + a[j] <= s){
            x[count] = a[j];
            Try(j+1,count + 1,sum + x[count]);
        }
    }
}
int main (){
    sang();
    int t;
    cin>>t;
    while(t--){
        khoitao();
        memset(a,0,sizeof(a));
        memset(x,0,sizeof(x));
        cnt = 0;
        for(int i = p+1;i<=s;i++){
            if(nt[i]){
                a[cnt++] = i;
            }
        }
        Try(0,0,0);
        cout<<ve.size()<<endl;
        sort(ve.begin(),ve.end());
        for(vector<int> x : ve){
            for(int j : x) cout<<j<<" ";
            cout<<endl; 
        }
        v.clear();
        ve.clear();
    }
    return 0;
}