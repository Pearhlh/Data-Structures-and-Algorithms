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
            if(isalpha(i)){
                string tmp = "";
                tmp += i;
                st.push(tmp);
            }else{
                string tmp = "";
                string tmp1 = st.top();
                st.pop();
                string tmp2 = st.top();
                st.pop();
                tmp = i + tmp2 + tmp1;
                st.push(tmp);
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}