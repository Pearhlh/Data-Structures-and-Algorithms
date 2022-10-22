#include <bits/stdc++.h>
using namespace std;
int n;
string s = "";
void khoitao(){
    for(int i = 1;i<=n;i++){
        s += to_string(i);
    }
}
int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        s = "";
        khoitao();
        do{
            cout<<s<<" ";
        }while(next_permutation(s.begin(),s.end()));
        cout<<endl;
    }
    return 0;
}