#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;
        cin>>s;
        int mp[256] = {0};
        for(char i : s) mp[i]++;
        int Max = INT_MIN;
        for(char i : s) Max = max(Max,mp[i]);
        int m = (Max - 1) * (n - 1);
        if(m > s.size() - Max) cout<<-1;
        else cout<<1;
        cout<<endl;
    }
    return 0;
}