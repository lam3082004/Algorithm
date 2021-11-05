#include <bits/stdc++.h>
using namespace std;
const int nmax = 1e5 + 5;
int t, n;
string s;
bool ktra(string s)
{
    int d = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            d++;
        if (s[i] == 'b' && s[i + 1] == 'a')
            d--;
    }
    return (d == 0);
}
void solve()
{
    if (ktra(s))
    {
        for (int i = 1; i <= n; i++)
            cout << s[i];
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            string res = s;
            res[i] = (s[i] == 'a' ? 'b' : 'a');
            if (ktra(res))
            {
                for (int j = 1; j <= n; j++)
                    cout << res[j];
                cout << '\n';
                return;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = s.size();
        s = ' ' + s;
        solve();
    }
}
