#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void Try(int n, char a, char b, char c)
{
    if(n==1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    Try(n - 1, a, c, b);
    Try(1, a, b, c);
    Try(n - 1, b, a, c);
}

int main()
{
    faster();
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        Try(n, 'A', 'B', 'C');
    }
    return 0;
}