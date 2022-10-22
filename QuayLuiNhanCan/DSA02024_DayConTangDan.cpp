#include <bits/stdc++.h>
using namespace std;
int n,a[100],x[100];
vector<string> v;   
void khoitao(){
    cin>>n;
    for(int i = 1 ;i<=n;i++) cin>>a[i];
}
void Try(int pos,int cnt){
    if(cnt >= 3){
        string s = "";
        for(int j = 1;j<cnt;j++){
            s += to_string(x[j]) + " ";
        }
        v.push_back(s);
    }
    for(int j = pos;j<=n;j++){
        if(a[j] > x[cnt - 1]){
            x[cnt] = a[j];
            Try(j+1,cnt+1);
        }
    }
}
int main (){
    khoitao();
    Try(1,1);
    sort(v.begin(),v.end());
    for(string x : v) cout<<x<<endl;
    return 0;
}