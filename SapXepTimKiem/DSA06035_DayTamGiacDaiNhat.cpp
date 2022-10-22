#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 1;i<=n;i++) cin>>a[i];
    int f1[n+1];
    int f2[n+1];
    for(int i = 1;i<=n;i++) f1[i] = 1;
    for(int i = 2;i<=n;i++){
        if(a[i] > a[i-1]){
            f1[i] = f1[i-1] + 1;
        }
    }
    for(int i = 1;i<=n;i++) f2[i] = 1;
    for(int i = n - 1;i>=1;i--){
        if(a[i] > a[i+1]){
            f2[i] = f2[i+1] + 1;
        }
    }
    int Max = 1;
    for(int i = 1;i<=n;i++) Max = max(Max,f1[i] + f2[i] - 1);
    cout<<Max<<endl;
    }
    return 0;
}