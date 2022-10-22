#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    auto it = upper_bound(a,a+n,k);
    if(it == a) cout<<-1<<endl;
    else{
        it--;
        cout<<it - a +  1<<endl;
    }
    }
    return 0;
}