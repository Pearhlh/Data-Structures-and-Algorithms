#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int n;
    cin>>n;
    ll a[n+1];
    for(int i = 0 ;i<n;i++) cin>>a[i];
    ll f1[n+1];
    for(int i = 0 ;i<n;i++) f1[i] = a[i];
    for(int i = 1;i<n;i++){
        for(int j = i - 1;j>=0;j--){
            if(a[i] > a[j]){
                f1[i] = max(f1[j] + a[i],f1[i]);
            }
        }
    }
    ll f2[n+1];
    for(int i = 0 ;i<n;i++) f2[i] = a[i];
    for(int i = n - 1;i>=0;i--){
        for(int j = i + 1;j<n;j++){
            if(a[i] > a[j]){
                f2[i] = max(f2[j] + a[i],f2[i]);
            }
        }
    }
    ll Max = LLONG_MIN;
    for(int i = 0 ;i<n;i++){
        Max = max(f1[i] + f2[i] - a[i],Max);
    }
    cout<<Max<<endl;
}