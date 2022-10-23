#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string> st;
        for(int i = s.size() - 1;i>=0;i--){
            if(isdigit(s[i])){
                string tmp = "";
                tmp += s[i];
                st.push(tmp);
            }else{
                string tmp1 = st.top();
                st.pop();
                string tmp2 = st.top();
                st.pop();
                if(s[i] == '+'){
                    ll a = stoll(tmp1);
                    ll b = stoll(tmp2);
                    ll k = a + b;
                    st.push(to_string(k));
                }else if(s[i] == '-'){
                    ll a = stoll(tmp1);
                    ll b = stoll(tmp2);
                    ll k = a - b;
                    st.push(to_string(k));
                }else if(s[i] == '*'){
                    ll a = stoll(tmp1);
                    ll b = stoll(tmp2);
                    ll k = a * b;
                    st.push(to_string(k));
                }else if(s[i] == '/'){
                    ll a = stoll(tmp1);
                    ll b = stoll(tmp2);
                    ll k = a / b;
                    st.push(to_string(k));
                }
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}