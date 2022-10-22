#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        int a[d+1];
        if(9 * d < s){
            cout<<-1<<endl;
        }else{
            s -= 1;
            for(int i = 1;i<d;i++){
                if(s > 9){
                    a[i] = 9;
                    s -= 9;
                }else{
                    a[i] = s;
                    s = 0;
                }
            }
            a[d] = s + 1;
        for(int i = d;i>=1;i--) cout<<a[i];
        cout<<endl;
        }
    }
    return 0;
}