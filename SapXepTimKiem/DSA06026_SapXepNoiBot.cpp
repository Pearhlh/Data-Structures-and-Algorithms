#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    for(int i =  0;i<n-1;i++){
        int check = 0;
        for(int j = 0 ;j<n-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                check = 1;
            }
        }
        if(check){
            cout<<"Buoc "<<i+1<<": ";
            for(int i = 0 ;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }else{
            break;
        }
    }
    return 0;
}