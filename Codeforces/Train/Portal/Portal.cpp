#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 4e2 + 5;
int n, m, t, a[N][N], f[N][N];
int b[N], c[N];
char x;
int get(int x, int y, int u, int v)
{
    if (x > u || y > v)
        return 0;
    return (f[u][v] - f[x - 1][v] - f[u][y - 1] + f[x - 1][y - 1]);
}
int get2(int x, int y, int u, int v)
{
    if (x > u || y > v)
        return 0;
    return (v - y + 1) * (u - x + 1) - (f[u][v] - f[x - 1][v] - f[u][y - 1] + f[x - 1][y - 1]);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        fo(i, 1, m)
            fo(j, 1, n)
        {
            cin >> x;
            a[i][j] = x - '0';
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
        }
        int ans = 1e9;
        fo(i, 1, m)
            fo(j, i + 4, m)
        {
            int res = -1e9;
            fo(k, 1, n)
            {
                b[k] = get2(i, 1, i, k) + get2(j, 1, j, k);
                c[k] = get(i + 1, 1, j - 1, k);
                if (k >= 4)
                {
                    res = max(res, b[k - 3] + c[k - 3] - get2(i + 1, k - 3, j - 1, k - 3));
                    ans = min(ans, b[k - 1] + c[k - 1] - res + get2(i + 1, k, j - 1, k));
                }
            }
        }
        cout << ans << '\n';
    }
}
