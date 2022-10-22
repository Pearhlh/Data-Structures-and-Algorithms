#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],check = 1;
void khoitao(){
    for(int i = 1;i<=n;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == k - n + i){
        i--;
    }
    if(i == 0) check = 0;
    else{
        a[i]++;
        for(int j =  i+ 1;j<=n;j++){
            a[j] = a[j-1] + 1;
        }
    }
}

int main (){
    int t;
    cin>>t;
    while(t--){
    cin>>k>>n;
    khoitao();
    while(check){
        for(int i = 1;i<=n;i++) cout<<a[i];
        cout<<" ";
        sinh();
    }
    cout<<endl;
    check = 1;
    }
    return 0;
}