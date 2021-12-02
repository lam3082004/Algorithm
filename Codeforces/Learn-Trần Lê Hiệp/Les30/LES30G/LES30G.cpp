#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll t, a[nmax], b[nmax], x, y;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES30G.inp", "r", stdin);
    freopen("LES30G.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    s = ' ' + s;
    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i] == '(' || s[i] == ')')
        {
            if (i % 2 != 0)
                a[i]++;
            else
                a[i]--;
        }
        a[i] += a[i - 1];
    }
    // fo(i, 0, s.size()) cout << a[i] << ' ';
    // cout << '\n';
    cin >> t;
    while (t--)
    {
        int s = 0, p = 0;
        cin >> x >> y;
        // x--;
        // y--;
        cout << abs(a[y] - a[x - 1]);
        cout << '\n';
    }
}