#include <bits/stdc++.h>
using namespace std;
int n,k,check = 1,a[100],b[100];
void khoitao(){
    for(int i = 1;i<=n;i++){
        a[i] = i;
    }
    for(int i = 1;i<=n;i++){
        cin>>b[i];
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == k - n + i){
        i--;
    }
    if(i == 0){
        check = 0;
    }else{
        a[i]++;
        for(int j = i+ 1;j<=n;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
bool checking(int a[],int b[],int n){
    for(int i = 1;i<=n;i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    cin>>k>>n;
    khoitao();
    int count = 1;
    while(check){
        if(checking(a,b,n)){
            cout<<count<<endl;
            break;
        }
        else{
            count++;
            sinh();
        }
    }
    check = 1;
    }
    return 0;
}