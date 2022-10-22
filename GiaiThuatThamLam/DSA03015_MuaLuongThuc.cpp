#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    int n,s,m;
    cin>>n>>s>>m;
    int k = s - s/7;
    if(n * k < m * s) cout<<-1<<endl;
    else{   
        for(int i = 1;i<=k;i++){
            if(n*i >= m*s){
                cout<<i<<endl;
                break;
            }
        }
    }
    }
    return 0;
}