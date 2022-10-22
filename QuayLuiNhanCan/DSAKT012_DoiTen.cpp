#include <bits/stdc++.h>
#define ll long long
using namespace std;
int Min;
int n,k,a[100];
int check = 0;
void Try(int pos,int count,int sum){
    if(sum == k){
        Min = min(Min,count);
        check = 1;
    }
    for(int j = pos;j<n;j++){
        if(sum + a[j] <= k){
            Try(j   +   1   ,count   +   1,sum + a[j]);
        }
    }
}
int main (){
        Min = INT_MAX;
        cin>>n>>k;
        for(int i = 0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        Try(0,0,0);
        if(check)   cout<<Min<<endl;
        else cout<<-1<<endl;
    return 0;
}