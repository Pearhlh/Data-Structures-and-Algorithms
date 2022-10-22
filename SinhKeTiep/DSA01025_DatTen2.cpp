#include <bits/stdc++.h>
using namespace std;
int n,k,check;
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
    int t;
    cin>>t;
    while(t--){ 
    check = 1;
    cin>>n>>k;
    string s = "";
    for(int i = 1;i<=n;i++){
        s += 'A' + i - 1;
    }
    khoitao(n,k);
    while(check){
        for(int i = 1;i<=k;i++){
            cout<<s[a[i] - 1];
        }
        cout<<endl;
        sinh(n,k);
    }
    }
    return 0;
}