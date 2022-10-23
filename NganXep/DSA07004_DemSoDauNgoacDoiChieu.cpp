#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    stack<char> st;
    for(char i : s){
        if(i == '(' || i == '{' || i == '[') st.push(i);
        else{
            if(!st.empty()){
                if(i == ')' && st.top() == '(') st.pop();
                else if(i == ']' && st.top() == '[') st.pop();
                else if(i == '}' && st.top() == '{') st.pop();
                else{
                    st.push(i);
                }
            }else st.push(i);
        }
    }
    string tmp = "";
    int ans = 0;
    while(!st.empty()){
        tmp += st.top();
        st.pop();
        if(tmp.size() == 2){
            if(tmp[0] == tmp[1]) ans += 1;
            else ans += 2;
            tmp = "";
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}   
