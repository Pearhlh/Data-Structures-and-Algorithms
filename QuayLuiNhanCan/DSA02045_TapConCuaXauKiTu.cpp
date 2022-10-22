#include <bits/stdc++.h>
using namespace std;
string s;
char x[100];
vector<string> v;
void Try(int pos,int count){
    if(count >= 1){
        string tmp = "";
        for(int i = 0 ;i<count;i++){
            tmp += x[i];
        }
        v.push_back(tmp);
    }
    for(int i = pos;i<s.size();i++){
        x[count] = s[i];
        Try(i+1,count + 1);
    }   
}
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin>>s;
        Try(0,0);
        sort(v.begin(),v.end());
        for(string x : v) cout<<x<<" ";
        cout<<endl;
        v.clear();
    }
}