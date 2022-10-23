#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        stack<int> st;
        vector<int> v;
        for(int i = n - 1;i>=0;i--){
            while(!st.empty() && a[i] >= st.top()){
                st.pop();
            }
            if(st.empty()) v.push_back(-1);
            else v.push_back(st.top());
            st.push(a[i]);
        }
        reverse(v.begin(),v.end());
        for(int x : v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}