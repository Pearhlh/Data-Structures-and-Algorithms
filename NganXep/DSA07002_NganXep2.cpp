#include <bits/stdc++.h>
using namespace std;

int main (){
    stack<int> st;
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>s;
        if(s == "PUSH"){
            cin>>n;
            st.push(n);
        }else if(s == "POP"){
            if(st.size()) st.pop();
        }
        else if(s == "PRINT"){
            if(st.size() == 0) cout<<"NONE";
            else{
                cout<<st.top();
            }
            cout<<endl;
        }
    }
    return 0;
}