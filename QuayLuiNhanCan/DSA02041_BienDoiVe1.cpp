#include <bits/stdc++.h>
#define ll long long
using namespace std;
int Min;
void Try(int k,int count){
    if(k == 1){
        Min = min(Min,count);
        return ;   
    }
    if(k % 2 == 0){
        if(count + 1 < Min) Try(k/2,count+1);
    }
    if(k % 3 == 0){
        if(count + 1 < Min) Try(k/3,count+1);
    }
    if(k > 1){
        if(count + 1 < Min ) Try(k-1,count+1);
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        Min = INT_MAX;
        cin>>n;
        Try(n,0);
        cout<<Min<<endl;
    }
    return 0;
}