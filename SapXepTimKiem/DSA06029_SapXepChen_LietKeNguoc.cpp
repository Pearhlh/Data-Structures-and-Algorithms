#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    vector<string> v;
    for(int i = 0 ;i<n;i++){
        string s = "";
        s += "Buoc " + to_string(i) + ": ";
        sort(a,a+i+1);
        for(int j = 0 ;j<=i;j++){
            s += to_string(a[j]) + " ";
        }
        v.push_back(s);
    }
    for(int i = v.size() - 1;i>=0;i--) cout<<v[i]<<endl;
    return 0;
}