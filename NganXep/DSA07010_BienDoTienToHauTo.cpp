#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    stack<string> st;
    string s;
    cin>>s;
    for(int i = s.size() - 1;i>=0;i--){
        if(isalpha(s[i])){
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }else{
            string tmp = "";
            tmp += st.top();
            st.pop();
            tmp += st.top();
            st.pop();
            tmp += s[i];
            st.push(tmp);
        }
    }
    cout<<st.top()<<endl;
    }
    return 0;
}