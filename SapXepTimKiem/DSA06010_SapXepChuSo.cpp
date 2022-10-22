#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        getline(cin>>ws,s);
        set<char> se;
        for(char i : s){
            if(i != ' ') se.insert(i);
        }
        for(auto it : se) cout<<it<<" ";
        cout<<endl;
    }
}