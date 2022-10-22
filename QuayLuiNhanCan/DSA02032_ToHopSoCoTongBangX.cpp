#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],x[100];
int check;
vector<string> v;
void khoitao(){
    cin>>n>>k;
    for(int i = 0 ;i<n;i++) cin>>a[i];
}
void Try(int pos,int cnt,int sum){
    if(sum == k){
        string tmp = "";
        tmp += "{";
        for(int j = 0;j<cnt;j++){
            tmp += to_string(x[j]);
            if(j != cnt -1 ) tmp += " ";
            else tmp += "}";
        }
        v.push_back(tmp);
        check = 1;
    }
    for(int j = pos;j<n;j++){
        if(sum + a[j] <= k){
            x[cnt] = a[j];
            Try(j,cnt + 1,sum + x[cnt]);
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
    check = 0;
    khoitao();
    sort(a,a+n);
    Try(0,0,0);
    if(check){
        cout<<v.size()<<" ";
        for(string x : v) cout<<x<<" ";
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }
    v.clear();
    }
    return 0;
}