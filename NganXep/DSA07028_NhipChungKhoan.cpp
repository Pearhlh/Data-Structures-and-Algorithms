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
        int l[n+1];
        for(int i = 0 ;i<n;i++){
            int check = 0;
            while(!st.empty() && a[i] >= a[st.top()]){
                check = 1;
                st.pop();
            }
            if(!st.empty()) l[i] = i - st.top();
            else if(st.empty() && check == 1) l[i] = i + 1;
            else l[i] = 1;
            st.push(i);
        }
        for(int i = 0;i<n;i++) cout<<l[i]<<' ';
        cout<<endl;
    }
    return 0;
}