#include <bits/stdc++.h>
using namespace std;
int a[20];
int n;
int check;
void khoitao(){
    cin>>n;
    for(int i = 0 ;i<n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == -1) check = 0;
    else{
        a[i] = 1;
    }
}
void solve(string s){
    cout<<s[0];
    for(int i = 1;i<s.size();i++){
        if(s[i] == s[i-1]) cout<<0;
        else cout<<1;
    }
    cout<<endl;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}