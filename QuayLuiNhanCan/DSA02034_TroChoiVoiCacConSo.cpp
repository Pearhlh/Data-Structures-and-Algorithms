#include <bits/stdc++.h>
using namespace std;
int check(string s){
    for(int i = 0 ;i<s.size()- 1;i++){
        int tmp1 = s[i] - '0';
        int tmp2 = s[i+1] - '0';
        if(abs(tmp1 - tmp2) == 1) return 0;
    }   
    return 1;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    string s = "";
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++) s += to_string(i);
    do{
        if(check(s)) cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    }
    return 0;
}   