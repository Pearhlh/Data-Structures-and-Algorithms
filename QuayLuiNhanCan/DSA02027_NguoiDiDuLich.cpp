#include <bits/stdc++.h>
using namespace std;
int n,a[100][100],x[100];
bool used[100];
int Min = INT_MAX;
int Cmin = INT_MAX;
void khoitao(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin>>a[i][j];
            Cmin = min(Cmin,a[i][j]);
        }
    }
}
void Try(int i,int ans){
    for(int j = 2;j<=n;j++){
        if(used[j] == false){
            x[i] = j;
            used[j] = true;
            ans += a[x[i-1]][x[i]];
            if(i == n){
               Min = min(Min, ans + a[x[i]][1]);
            }else if(ans + (n-i+1)*Cmin < Min){
                Try(i+1,ans);
            }
            used[j] = false;
            ans -= a[x[i-1]][x[i]];
        }
    }
}
int main (){
    khoitao();
    memset(used,false,sizeof(used));
    x[1] = 1;
    used[1] = true;
    Try(2,0);
    cout<<Min<<endl;
}