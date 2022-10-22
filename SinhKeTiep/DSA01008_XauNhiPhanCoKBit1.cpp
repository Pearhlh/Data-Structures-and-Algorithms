#include <bits/stdc++.h>
using namespace std;
int n,k,check = 1;
int a[100];
void khoitao(){
    for(int i = 1;i<=n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) check = 0;
    else{
        a[i] = 1;
    }
}
bool checking(){
    int count = 0;
    for(int i = 1;i<=n;i++){
        if(a[i] == 1) count++;
    }
    if(count == k) return true;
    else return false;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        khoitao();
        while(check){
            if(checking()){
                for(int i = 1;i<=n;i++){
                    cout<<a[i];
                }
                cout<<endl;
            }
            sinh();
        }
        check = 1;
    }
    return 0;
}