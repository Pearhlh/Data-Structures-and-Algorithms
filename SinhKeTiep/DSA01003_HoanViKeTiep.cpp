#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int check = 0;
        for(int i = 0;i<n;i++) cin>>a[i];
        if(next_permutation(a,a+n)){
            check = 1;
        }
        if(check){
            for(int i = 0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }else{
            for(int i = 1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        check = 0;
    }
    return 0;
}