#include <bits/stdc++.h>
using namespace std;
bool checking(int a[],int b[],int n){
    for(int i = 0;i<n;i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        int check = 1;
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i = 0;i<n;i++) a[i] = i + 1;
        for(int i = 0;i<n;i++) cin>>b[i];
        int count = 1;
        while(check){
            if(checking(a,b,n)){
                cout<<count<<endl;
                check = 0;
            }else{
                count++;
                next_permutation(a,a+n);
            }
        }
    }
    return 0;
}