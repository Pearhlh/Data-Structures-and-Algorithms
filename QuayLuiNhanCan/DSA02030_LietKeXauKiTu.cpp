#include <bits/stdc++.h>
#define ll long long
#define fast();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
char c;
int n, check = 1;
int a[100];
void khoitao(){
    for(int i = 0;i<n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 0 && a[i] == c - 'A'){
        i--;
    }
    if(i == -1) check = 0 ;
    else{
        a[i]++;
        for(int j = i + 1;j<n;j++){
            a[j] = a[j-1];
        }
    }
}
int main (){
    fast();
    cin>>c>>n;
    khoitao();
    string s = "";
    for(int i = 1;i<=c - 'A' + 1;i++){
        s += 'A' + i - 1;
    }
    cout<<s<<endl;
    while(check){
        for(int i = 0 ;i<n;i++){
            //cout<<s[a[i]];
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
}