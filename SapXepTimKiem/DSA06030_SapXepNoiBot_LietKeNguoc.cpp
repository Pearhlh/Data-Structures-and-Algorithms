#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    vector<string> v;
    for(int i =  0;i<n-1;i++){
        int check = 0;
        for(int j = 0 ;j<n-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                check = 1;
            }
        }
        if(check){
            string s = "";
            s += "Buoc " + to_string(i+1) + ": ";
            for(int i = 0 ;i<n;i++) s += to_string(a[i]) + " ";
            v.push_back(s);
        }else{
            break;
        }
    }
    for(int i = v.size() - 1;i>=0;i--) cout<<v[i]<<endl;
    }
    return 0;
}