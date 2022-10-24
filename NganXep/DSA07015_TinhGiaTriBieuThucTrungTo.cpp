#include <bits/stdc++.h>
#define ll long long
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
    int check = 1;
    for(char i : s){
        if(isdigit(i)){
            if(check == 1) res += i;
            else{
                res = res + " " + i;
                check = 1;
            }
        }
        else if(i == '('){
            st.push(i);
        }
        else if(i == ')'){
            while(!st.empty() && st.top() != '('){
                res = res + " " + st.top();
                st.pop();
            }
            st.pop();
        }else{
            check = 0;
            while(!st.empty() && Priority(st.top()) >= Priority(i)){
                res = res + " " + st.top();
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        if(st.top() != '(') res = res + " " +  st.top();
        st.pop();
    }
    stringstream ss(res);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    stack<ll> st1;
    for(int i = 0 ;i<v.size();i++){
        if(v[i].size() > 1) st1.push(stoll(v[i]));
        else if(v[i].size() == 1 && isdigit(v[i][0])) st1.push(stoll(v[i]));
        else{
            ll a = st1.top(); st1.pop();
            ll b = st1.top(); st1.pop();
            if(v[i][0] == '+'){
                ll k = a + b;
                st1.push(k);
            }else if(v[i][0] == '-'){
                ll k = b - a;
                st1.push(k);
            }else if(v[i][0] == '*'){
                ll k = a * b;
                st1.push(k);
            }else if(v[i][0] == '/'){
                ll k = b / a;
                st1.push(k);
            }
        }
    }
    cout<<st1.top()<<endl;
    }
    return 0;
}