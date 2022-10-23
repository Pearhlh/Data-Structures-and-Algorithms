#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> v;
    string s;
    while(cin >> s){
        int n;
        if(s == "push"){
            cin>>n;
            v.push_back(n);
        }else if(s == "pop"){
            v.pop_back();
        }else if(s == "show"){
            if(v.size() == 0) cout<<"empty";
            else{
                for(int i = 0 ;i<v.size();i++){
                    cout<<v[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}