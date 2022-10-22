#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        sort(a,a+n);
        string tmp1 = "";
        string tmp2 = "";
        for(int i = 0 ;i<n;i++){
            if(i%2 == 0){
                tmp1 += to_string(a[i]);
            }else{
                tmp2 += to_string(a[i]);
            }
        }
        cout<<stoll(tmp1) + stoll(tmp2)<<endl;
    }
    return 0;
}