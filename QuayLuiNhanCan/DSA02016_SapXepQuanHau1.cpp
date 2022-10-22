#include <bits/stdc++.h>
using namespace std;
int x[100],cot[100],nguoc[100],xuoi[100];
int ans;
int n;
void Try(int i){
    for(int j = 1;j<=n;j++){
        if(cot[j] == 0 && xuoi[i + j - 1] == 0 && nguoc[n + i - j] == 0){
            x[i] = j;
            cot[j] = xuoi[i + j - 1]  = nguoc[n + i - j] = 1;
            if(i == n){
                ans++;
            }else{
                Try(i+1);
            }
            cot[j] = xuoi[i + j - 1]  = nguoc[n + i - j] = 0;
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        memset(x,0,sizeof(x));
        memset(cot,0,sizeof(cot));
        memset(nguoc,0,sizeof(nguoc));
        memset(xuoi,0,sizeof(xuoi));
        ans = 0;
        Try(1);
        cout<<ans<<endl;
    }
    return 0;
}