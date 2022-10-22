#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool checking(string s, string tmp){
   int idx = 0;
   for(char i : s){
        if(i == tmp[idx]) idx++;
        if(idx == tmp.size()) return true;
   }
   return false;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int check = 0;
        for(int i = pow(stoll(s),1.0/3);i>=0;i--){
            ll tmp = pow(i,3);
            if(checking(s,to_string(tmp))){
                cout<<tmp<<endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout<<-1<<endl;
    }
    return 0;
}