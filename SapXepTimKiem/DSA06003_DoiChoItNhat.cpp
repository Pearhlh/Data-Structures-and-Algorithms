#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while (t--){
    int n;
    cin>>n;
    int a[n+1];
    int count = 0;
    for(int i = 0 ; i<n;i++) cin>>a[i];
    for(int i = 0 ;i<n-1;i++){
        int check = 0;
        int Min = a[i];
        int vitri = i;
        for(int j = i + 1;j<n;j++){
            if(a[j] < Min){
                Min = a[j];
                vitri = j;
                check = 1;
            }
        }
        if(check){
            swap(a[i],a[vitri]);
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}