#include <bits/stdc++.h>
using namespace std;
bool checking(char c){
    return c == 'A' || c == 'E';
}
bool check(string s){
    for(int i = 1;i<s.size()-1;i++){
        if(checking(s[i]) && !checking(s[i-1]) && !checking(s[i+1])) return false;
    }
    return true;
}
int main (){
    char c;
    cin>>c;
    string s = "";
    for(int i = 1;i<=c-'A' + 1;i++){
        s += 'A' + i - 1;
    }
    do{
        if(check(s)) cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}