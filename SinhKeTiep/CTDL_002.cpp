#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,a[100],check = 1;
ll b[100];

void khoitao(){
    cin>>n>>k;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0 ;i<n;i++) b[i] = 0;
}
void sinh(){
    int i =  n - 1;
    while(i >= 0 && b[i] == 1){
        b[i] = 0;
        i--;
    }
    if(i == -1) check = 0;
    else{
        b[i] = 1;
    }
}
int main (){
    khoitao();
    int count = 0;
    while(check){
        ll sum = 0;
        for(int i = 0 ;i < n;i++){
            if(b[i]){
                sum += a[i];
            }
        }
        if(sum == k){
            count++;
            for(int i = 0 ;i<n;i++){
                if(b[i]) cout<<a[i]<<" ";
            }
            cout<<endl;
            cout<<endl;
        }
        sinh();
    }
    cout<<count<<endl;
}