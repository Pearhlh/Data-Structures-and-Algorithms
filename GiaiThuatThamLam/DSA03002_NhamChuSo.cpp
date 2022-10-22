#include <bits/stdc++.h>
using namespace std;

int main (){
    string a,b;
    cin>>a>>b;
    for(char &i : a){
        if(i == '6'){
            i = '5';
        }
    }
    for(char &i : b){
        if(i == '6'){
            i = '5';
        }
    }
    cout<<stoll(a) + stoll(b)<<" ";
    for(char &i : a){
        if(i == '5'){
            i = '6';
        }
    }
    for(char &i : b){
        if(i == '5'){
            i = '6';
        }
    }
    cout<<stoll(a) + stoll(b)<<" ";
    return 0;
}