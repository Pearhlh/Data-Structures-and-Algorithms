#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        cout << s[0];
        int tmp = s[0] - '0', x;
        for(int i = 1; i < s.size(); ++i)
        {
            x = s[i] - '0';
            if(x != tmp)
            {
                tmp = 1;
                cout << tmp;
            }
            else
            {
                tmp = 0;
                cout << tmp;
            }
        }
        cout << endl;
    }
    return 0;
}