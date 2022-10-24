#include <bits/stdc++.h>
#define ll long long
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main (){
    fast();
    int n;
    cin>>n;
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for(int i = 1;i<=n;i++){
        string s;
        getline(cin>>ws,s);
        stringstream ss(s);
        string tmp;
        while(ss >>  tmp){
            int x = stoi(tmp);
            a[i][x] = a[x][i] = 1;
        }
        
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
            cout<<endl;
    }
    return 0;   
}