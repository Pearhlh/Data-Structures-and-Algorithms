#include <bits/stdc++.h>
#define ll long long
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i = 1;i<=n;i++){
        string s;
        getline(cin >>ws,s);
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            int k = stoi(tmp);
            if(k > i) v.push_back({i,k});
        }
    }
    for(pair<int,int> x : v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}