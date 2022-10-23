#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+1],l[n+1],r[n+1];
        for(int i = 0 ;i<n;i++) cin>>a[i];
        stack<int> st1,st2;
        st1.push(n - 1);
        for(int i = n - 1;i>=0;i--){
            while(!st1.empty() && a[i] <= a[st1.top()]) st1.pop();
            if(!st1.empty()) r[i] = st1.top() - 1; // Độ dài lớn nhất sang bên phải kể từ phẩn tử a[i];
            else r[i] = n - 1;  // Độ dài lớn nhất sang bên phải kể từ phẩn tử a[i];
            st1.push(i);
        }
        for(int i = 0 ;i<n;i++){
            while(!st2.empty() && a[i] <= a[st2.top()]) st2.pop();
            if(!st2.empty()) l[i] = st2.top() + 1;// Độ dài lớn nhất sang bên trái kể từ phẩn tử a[i];
            else l[i] = 0;// Độ dài lớn nhất sang bên phải kể từ phẩn tử a[i];
            st2.push(i);
        }
        ll ans = 0;
        for(int i = 0 ;i<n;i++) ans = max(ans,(ll)(r[i] - l[i] + 1) * a[i]);
        cout<<ans<<endl;
    }
    return 0;
}