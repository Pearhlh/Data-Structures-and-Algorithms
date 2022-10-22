#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n ; cin >> n ;
    int a[n] , b[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    bool check = true;
    sort(b , b + n);
    for(int i = 0 ; i < n; i++)
    {
        if(a[i] != b[i] && a[i] != b[n - i - 1])
        {
            check = false;
            break;
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    cout<<endl;
    }
    return 0;
}