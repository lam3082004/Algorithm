#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a, b, c;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        ll dem = 0, m = a;
        m = max(m, max(b, c));
        if (m == a)
            dem++;
        if (m == b)
            dem++;
        if (m == c)
            dem++;
        if (dem == 1)
        {
            if (a == m)
                cout << 0 << ' ' << m - b + 1 << ' ' << m - c + 1;
            else if (b == m)
                cout << m - a + 1 << ' ' << 0 << ' ' << m - c + 1;
            else if (c == m)
                cout << m - a + 1 << ' ' << m - b + 1 << ' ' << 0;
        }
        else if (dem == 2)
        {
            cout << m - a + 1 << ' ' << m - b + 1 << ' ' << m - c + 1;
        }
        else
            cout << 1 << ' ' << 1 << ' ' << 1;
        cout << '\n';
    }
}