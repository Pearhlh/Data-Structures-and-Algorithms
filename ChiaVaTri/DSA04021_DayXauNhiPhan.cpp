#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll F[100];
ll n,k;
void init(){
    F[1] = 1;
    F[2] = 1;
    for(int i = 3;i<=92;i++){
        F[i] = F[i-1] + F[i-2];
    }
}
char solve(int n,ll k){ 
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= F[n-2]){
        return solve(n-2,k);
    }else{
        return solve(n-1,k - F[n-2]);
    }
}
int main (){
    init();
    int t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
    }
}