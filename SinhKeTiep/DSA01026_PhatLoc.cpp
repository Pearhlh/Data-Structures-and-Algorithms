#include <bits/stdc++.h>
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int check = 1;
int n;
string s;
void khoitao(){
    cin>>n;
    s = string(n,'6');
}
void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if(i == -1) check = 0;
    else{
        s[i] = '8';
    }
}
bool checking8(string s){
    for(int i = 0;i<s.size() -1;i++){
        if(s[i] == s[i+1] && s[i] == '8' && s[i+1] == '8') return false;
    } 
    return true;
}
bool checking6(string s){
    int count = 0;
    for(int i = 0 ;i<s.size();i++){
        if(s[i] == '6'){
            count++;
        }else{
            count = 0;
        }
        if(count > 3) return false;
    }
    return true;
}
bool checking68(string s){
    if(s[0] == '8' && s[s.size() -1] == '6') return true;
    else return false; 
}
int main (){
    fast();
    khoitao();
    s[0] = '8';
    s[s.size() -1] = '6';
    while(check){
        if(checking8(s) && checking6(s) && checking68(s)) cout<<s<<endl;
        sinh();
    }
    return 0;
    return 0;
}