#include <bits/stdc++.h>
using namespace std;

string s;
int n,check = 1;
void khoitao(){
    s = string(n,'A');
}
void sinh(){
    int i = n - 1;
    while(i >= 0 && s[i] == 'B'){
        s[i] = 'A';
        i--;
    }
    if(i == - 1) check = 0;
    else{
        s[i] = 'B';
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        khoitao();
        while(check){
            cout<<s<<" ";
            sinh();
        }
        cout<<endl;
        check = 1;
    }
    return 0;
}