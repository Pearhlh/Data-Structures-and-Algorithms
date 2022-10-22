#include <bits/stdc++.h>   
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n = s.size();
    bool f[n+1][n+1];
    memset(f,false,sizeof(f));
    int Max = 1;
    for(int i = 0 ;i<n;i++){
        f[i][i] = true;
    }
    for(int l = 2;l<=n;l++){
        for(int i = 0 ;i<=n-l;i++){
            int j = i + l - 1;
            if(l == 2){
                if(s[i] == s[j]) f[i][j] = true; 
            }else{
                if(s[i] == s[j] && f[i+1][j-1]){
                    f[i][j] = true;
                }
            }
            if(f[i][j]) Max = max(Max,l);
        }
    }
    cout<<Max<<endl;
    }
    return 0;
}