#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
int t, n, m;
string c;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("new.inp", "r", stdin);
    freopen("new.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> c;
        int k = c.size();
        c = ' ' + c;
        int x = 0, y = 0;
        int l = 1, r = m;
        int u = 1, d = n;
        fo(i, 1, k)
        {
            x -= (c[i] == 'L');
            x += (c[i] == 'R');
            y -= (c[i] == 'U');
            y += (c[i] == 'D');
            //            cout<<i<<' '<<x<<' '<<y<<'\n';
            if (x + l > m || r + x <= 0 || y + u > n || d + y <= 0)
                break;
            l = max(l, -x + 1);
            r = min(r, m - x);
            u = max(u, -y + 1);
            d = min(d, n - y);
            //            cout<<l<<' '<<r<<' '<<u<<' '<<d<<'\n';
        }
        cout << u << ' ' << l << '\n';
    }
}