#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif
    int t;
    string s1;
    string s2;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = s;
        string s2 = s;
        if (s1[0] == '?')
        {
            s1[0] = 'B';
            s2[0] = 'R';
        }
        for (int i = 0; i < n; ++i)
        {
            if (s1[i] == '?')
            {
                if (s1[i - 1] == 'R')
                {
                    s1[i] = 'B';
                }
                else
                {
                    s1[i] = 'R';
                }
                if (s2[i - 1] == 'R')
                {
                    s2[i] = 'B';
                }
                else
                {
                    s2[i] = 'R';
                }
            }
        }
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 1; i < n; ++i)
        {
            if (s1[i - 1] == s1[i])
            {
                cnt1++;
            }
            if (s2[i - 1] == s2[i])
            {
                cnt2++;
            }
        }
        if (cnt1 < cnt2)
        {
            cout << s1 << endl;
            continue;
        }
        cout << s2 << endl;
    }
}
