#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    stack<string> st;
    string s;
    cin>>s;
    for(char i : s){
        if(isalpha(i)){
            string tmp = "";
            tmp += i;
            st.push(tmp);
        }else{
            string tmp = "(";
            string tmp1 = st.top(); st.pop();
            string tmp2 = st.top(); st.pop();
            tmp += tmp2 + i + tmp1 + ")";
            st.push(tmp);
        }
    }
    cout<<st.top()<<endl;
    }
    return 0;
}