#include <bits/stdc++.h>
using namespace std;
string s;
int n,check =1;
void khoitao(){
    s = string(n,'A');
}
void sinh(){
    int i = n - 1;
    while(i >= 0 && s[i] == 'H'){
        s[i] = 'A';
        i--;
    }
    if(i == - 1) check = 0;
    else{
        s[i] = 'H';
    }
}
bool checking1(){
    int count = 0 ;
    for(int  i = 0 ;i<n;i++){
        if(s[i] == 'H') count++;
        else count = 0;
        if(count == 2) return false;
    }
    return true;
}
bool checking2(){
    if(s[0] == 'H' && s[n-1] == 'A') return true;
    return false;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        khoitao();
        while(check){
            if(checking1() && checking2()) cout<<s<<endl;
            sinh();
        }
        check = 1;
    }
    return 0;
}