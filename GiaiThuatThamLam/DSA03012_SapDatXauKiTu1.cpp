#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    string s;
    map<char,int> mp;
    cin>>s;
    for(char i : s) mp[i]++;
    vector<int> v;
    for(auto it : mp) v.push_back(it.second);
    sort(v.begin(),v.end());
    int Max = v[v.size() - 1];
    int Tong = 0;
    for(int i = 0;i<v.size() - 1;i++){
        Tong += v[i];
    }
    if(Tong >= Max - 1){
        cout<<"1"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    }
    return 0;
}