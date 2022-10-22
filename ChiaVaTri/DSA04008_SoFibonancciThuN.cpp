#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
struct Matran{
    ll a[2][2];

    Matran operator * (Matran Khac){
        Matran Res;
        for(int i = 0;i<2;i++){
            for(int j = 0;j<2;j++){
                Res.a[i][j] = 0;
                for(int k = 0;k<2;k++){
                    Res.a[i][j] += a[i][k] * Khac.a[k][j];
                    Res.a[i][j] %= mod;
                }
            }
        }
        return Res;
    }
};
Matran powmod(Matran a, ll n){
    if(n == 1) return a;
    Matran tmp = powmod(a,n/2);
    if(n % 2) return tmp * tmp * a;
    else return tmp * tmp;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    Matran Res;
    Res.a[0][0] = 1;
    Res.a[0][1] = 1;
    Res.a[1][0] = 1;
    Res.a[1][1] = 0;
    Matran ans = powmod(Res,n);
    cout<<ans.a[0][1]<<endl;
    }
}