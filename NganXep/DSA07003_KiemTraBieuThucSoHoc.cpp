#include <bits/stdc++.h>
using namespace std;
bool check1(char x)
{
    return x == '-' || x == '+' || x == '*' || x == '/';
}
bool check(string s)
{
    stack<char>st;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] != ')')
        {
            st.push(s[i]);
        }
        else
        {
            bool ok = true;
            while(st.top() != '(')
            {
                if(check1(st.top())) ok = false;
                st.pop();
            }
            if(ok) return true;
            st.pop();
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string x;
    getline(cin>>ws,x);
    if(check(x)) cout << "Yes"<<endl;
    else cout << "No"<<endl;
    }
    return 0;
}