#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int check;
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0) check = 0;
    else{
        a[i]++;
        for(int j = i + 1;j<=k;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        check =1;
        cin>>n>>k;
        map<int,int> mp;
        for(int i = 1;i<=k;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int count = 0;
        sinh();
        if(check == 0) cout<<k<<endl;
        if(check){
            for(int i = 1;i<=n;i++) mp[a[i]] = 0;
            for(auto it : mp){
                if(it.second) count++;
            } 
            cout<<count<<endl;
        }
    }
    return 0;
}