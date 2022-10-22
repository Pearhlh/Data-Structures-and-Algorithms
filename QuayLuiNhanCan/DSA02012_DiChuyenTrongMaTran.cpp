#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,a[100][100];
ll dem;
void nhap(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>a[i][j];
        }
    }
}
void Try(ll i,ll j){
    if(i == n && j == m){
        dem++;
    }
    if(i + 1 <= n){
        a[i+1][j] = 0;
        Try(i+1,j);
        a[i+1][j] = 1;
    }
    if(j+1 <=m ){
        a[i][j+1] = 0;
        Try(i,j+1); 
        a[i][j+1] = 1;
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
    nhap();
    dem = 0;
    Try(1,1);
    cout<<dem<<endl;
    }
    return 0;
}