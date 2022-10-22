#include <bits/stdc++.h>
using namespace std;
string s;
int check = 1;
void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '0'){
        i--;
    }
    if(i == -1) check = 0;
    else{
        s[i] = '0';
        for(int j = i + 1;j<s.size();j++){
            s[j] = '1';
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        sinh();
        if(check)   cout<<s<<endl;
        else{
            cout<<string(s.size(),'1')<<endl;
        }
        check = 1;
    }
    return 0;
}