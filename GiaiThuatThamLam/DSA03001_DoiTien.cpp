#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[] = {1000,500,200,100,50,20,10,5,2,1};
int main (){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll count = 0;
    for(int i = 0;i<10;i++){
        count += n/a[i];
        n %= a[i];
    }
    cout<<count<<endl;
    }
    return 0;
}