#include <bits/stdc++.h>
using namespace std;
int Priority(char c){
    if(c == '+' || c == '-') return 1;
    else if(c == '/' || c == '*') return 2;
    else if(c == '^') return 3;
    return 0;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    stack<char> st;
    string res = "";
    for(char i : s){
        if(isalpha(i)) res += i;
        else if(i == '(') st.push(i);
        else if(i == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }else{
            while(!st.empty() && Priority(st.top()) >= Priority(i)){
                res += st.top();
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        if(st.top() != '(') res += st.top();
        st.pop();
    }
    cout<<res<<endl;
    }
    return 0;
}