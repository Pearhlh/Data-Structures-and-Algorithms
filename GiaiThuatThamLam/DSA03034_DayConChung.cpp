#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,m,p;
        cin>>n>>m>>p;
        ll a[n+1],b[m+1],c[p+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        for(int i = 0 ;i<m;i++) cin>>b[i];
        for(int i = 0 ;i<p;i++) cin>>c[i];
        int i = 0 ,j = 0 ,k = 0;
        bool check = false;
        while(i < n && j < m && k < p){
            if(a[i] == b[j] && b[j] == c[k]){
                cout<<a[i]<<" ";
                check = true;
                i++,j++,k++;
            }else{
                if(a[i] < b[j]) i++;
                else{
                    if(b[j] < c[k] ) j++;
                    else k++;
                }
            }
        }
        if(!check) cout<<"NO"<<endl;
        else cout<<endl;
    }
    return 0;
}