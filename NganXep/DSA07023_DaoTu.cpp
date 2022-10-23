#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        stack<string> st;
        string s;
        getline(cin>>ws,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            st.push(tmp);
        }
        while(st.size()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}