#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n+1];
    vector<int> VC;
    vector<int> VL;
    for(int i = 1 ;i<=n;i++) cin>>a[i];
    for(int i = 1;i<=n;i++){
        if(i%2) VL.push_back(a[i]);
        else VC.push_back(a[i]);
    }
    sort(VL.begin(),VL.end());
    sort(VC.begin(),VC.end(),greater<int>());
    int k = 0;
    while(k < VL.size() || k < VC.size()){
        if(k < VL.size() && k < VC.size()){
            cout<<VL[k]<<" "<<VC[k]<<" ";
        }else if(k < VL.size() && k >= VC.size()){
            cout<<VL[k]<<" ";
        }else{
            cout<<VC[k]<<" ";
        }
        k++;
    }
    return 0;
}