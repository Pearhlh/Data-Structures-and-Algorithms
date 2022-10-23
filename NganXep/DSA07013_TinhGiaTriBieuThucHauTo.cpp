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
        for(char i : s){
            if(isdigit(i)){
                string tmp = "";
                tmp += i;
                st.push(tmp);
            }else{
                string tmp1 = st.top();
                st.pop();
                string tmp2 = st.top();
                st.pop();
                if(i == '+'){
                    ll a = stoll(tmp2);
                    ll b = stoll(tmp1);
                    ll k = a + b;
                    st.push(to_string(k));
                }else if(i == '-'){
                    ll a = stoll(tmp2);
                    ll b = stoll(tmp1);
                    ll k = a - b;
                    st.push(to_string(k));
                }else if(i == '*'){
                    ll a = stoll(tmp2);
                    ll b = stoll(tmp1);
                    ll k = a * b;
                    st.push(to_string(k));
                }else if(i == '/'){
                    ll a = stoll(tmp2);
                    ll b = stoll(tmp1);
                    ll k = a / b;
                    st.push(to_string(k));
                }
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}