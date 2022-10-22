#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],check = 1;
void khoitao(){
    cin>>k>>n;
    for(int i = 1 ;i<=n;i++){
        cin>>a[i];
    }
}
void sinh(){
    int i = n ;
    while(i >= 1 && a[i] == k - n + i){
        i--;
    }
    if(i == 0) check = 0;
    else{
        a[i]++;
        for(int j = i + 1;j<=n;j++){
            a[j] = a[j -  1] + 1;
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sinh();
        if(check){
            for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }else{
            for(int i = 1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        check = 1;
    }
    return 0;
}