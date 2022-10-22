#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        while(true){
            if(b %  a == 0){
                cout<<1<<"/"<<b/a;
                break;
            }
            ll res = b/a + 1;
            cout<<1<<"/"<<res<<" + ";
            a = a * res  - b;
            b = b * res;
        }
        cout<<endl;
    }
    return 0;
}