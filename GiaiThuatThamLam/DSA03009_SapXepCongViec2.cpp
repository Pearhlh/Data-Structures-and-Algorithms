#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct CongViec{
    int id,deadline,profit;
};
int main (){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    CongViec a[1002];
    for(int i = 0;i<n;i++){
        cin>>a[i].id>>a[i].deadline>>a[i].profit;
    }
    sort(a,a+n,[](CongViec a , CongViec b) -> bool{
        return a.profit > b.profit;
    });
    bool used[1002] = {0};
    ll ans = 0;
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = a[i].deadline - 1;j>=0;j--){
            if(used[j] == false){
                count++;
                ans += a[i].profit;
                used[j] = true;
                break;
            }
        }
    }
    cout<<count<<" "<<ans<<endl;
    }
    return 0;
}