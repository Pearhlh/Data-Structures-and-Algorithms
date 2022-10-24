#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n+1][n+1];
    vector<pair<int,int>> ve;
    memset(a,0,sizeof(a));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]){
                ve.push_back({i,j});
            }
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 0 ;j<ve.size();j++){
            if(ve[j].first == i) cout<<ve[j].second<<" ";
        }
        cout<<endl;
    }
}