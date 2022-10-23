#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<char> st;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[') st.push(s[i]);
        else{
            if(st.size() == 0) return false;
            if(st.top() == '('){
                if(s[i] == ')') st.pop();
                else return false;
            }
            else if(st.top() == '{'){
                if(s[i] == '}') st.pop();
                else return false;
            }
            else if(st.top() == '['){
                if(s[i] == ']') st.pop();
                else return false;
            }
            else if(st.top() == '<'){
                if(s[i] == '>') st.pop();
                else return false;
            }
        }
    }
    if(st.size() != 0) return false;
    return true;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;

    if(check(s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}