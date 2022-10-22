#include <bits/stdc++.h>
using namespace std;
string s;
int check = 1;
void khoitao(){
    cin>>s;
}
void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1) check = 0;
    else{
        s[i] = '1';
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
    khoitao();
    sinh();
    if(check){
        cout<<s;
    }else{
        cout<<string(s.size(),'0');
    }
    cout<<endl;
    check = 1;
    }
    return 0;
}