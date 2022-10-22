#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    int check = 0;
    for(int i = n / 7;i>=0;i--){
        ll tmp = n - 7*i;
        if(tmp % 4 == 0){
            check = 1;
            for(int j = 0;j<tmp/4;j++){
                cout<<4;
            }
            for(int j = 0;j<i;j++){
                cout<<7;
            }
            cout<<endl;
            break;
        }
    }
    if(check ==0) cout<<-1<<endl;
    }
    return 0;
}