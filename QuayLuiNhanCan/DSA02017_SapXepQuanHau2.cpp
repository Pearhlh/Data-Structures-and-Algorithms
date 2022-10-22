#include <bits/stdc++.h>
using namespace std;
int x[9][9],cot[100],nguoc[100],xuoi[100];
int ans = 0;
int sum = 0;
int n;
void Try(int i){
    for(int j = 1;j<=n;j++){
        if(!cot[j] && !xuoi[i + j - 1] && !nguoc[n + i - j] ){
            cot[j] = xuoi[i + j - 1]  = nguoc[n + i - j] = 1;
            sum += x[i][j];
            if(i == n){
                ans = max(sum,ans); 
            }else{
                Try(i+1);
            }
            cot[j] = xuoi[i + j - 1]  = nguoc[n + i - j] = 0;
            sum -= x[i][j];
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        n = 8;
        for(int i =1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                cin>>x[i][j];
            }
        }
        sum = 0;
        ans = 0;
        memset(cot,0,sizeof(cot));
        memset(nguoc,0,sizeof(nguoc));
        memset(xuoi,0,sizeof(xuoi));
        Try(1);
        cout<<ans<<endl;
    }
    return 0;
}