#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
        vector<string> ve;
        for(int i = 0 ; i < n ; i++)    cin >> v[i];
        while(v.size() > 1){
            string tmp = "";
            tmp += "[";
            for(int i = 0 ; i < v.size() - 1 ; i++) tmp += to_string(v[i]) + " ";
            tmp += to_string(v[v.size() - 1]) + "]";
            ve.push_back(tmp);
            for(int i = 0 ; i < v.size() - 1 ; i++) v[i] = v[i] + v[i + 1];
            v.pop_back();
        }
        string tmp = "";
        tmp += "[" + to_string(v[0]) + "]";
        ve.push_back(tmp);
        for(int i = ve.size() - 1;i>=0;i--) cout<<ve[i]<<" ";
        cout<<endl;
    }
}