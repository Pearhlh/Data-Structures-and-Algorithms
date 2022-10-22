#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n] , prev[n] = {0};
    for(int &i : a) cin >> i;
    int Max = 0;
    for(int i = 0 ; i < n ; i++)
    {
        prev[a[i]] = prev[a[i] - 1] + 1;
        Max = max(Max , prev[a[i]]);
    }
    cout << n - Max;
}