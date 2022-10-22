#include <bits/stdc++.h>
using namespace std;
int n,a[100],check = 1;
void khoitao(){
    for(int i = 0;i<n;i++){
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
bool checking(){
    for(int i = 0;i<=n/2;i++){
        if(a[i] != a[n - i - 1]) return false; 
    }
    return true;
}
int main (){
    cin>>n;
    khoitao();
    while(check){
        if(checking()){
            for(int i = 0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
            cout<<endl;
        }
        sinh();
    }
    return 0;
}