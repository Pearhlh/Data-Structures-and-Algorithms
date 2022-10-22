#include <bits/stdc++.h>
using namespace std;
int n,k,check = 1;
int a[100];
void khoitao(int n,int k){
    for(int i = 1;i<=k;i++){
        a[i] = i;
    }
}
void sinh(int n,int k){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0) check = 0;
    else{
        a[i]++;
        for(int j = i + 1;j<=k;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main (){
    int n,k;
    cin>>n>>k;
    string s[n];
    set<string> se;
    for(int i = 0;i<n;i++) cin>>s[i];
    for(string x : s) se.insert(x);
    string s2[se.size()+1];
    int count = 1;
    for(auto it : se) s2[count++] = it;
    int n1 = se.size();
    khoitao(n1,k);
    while(check){
        for(int i = 1;i<=k;i++){
            cout<<s2[a[i]]<<" ";
        }
        cout<<endl;
        sinh(n1,k);
    }
}