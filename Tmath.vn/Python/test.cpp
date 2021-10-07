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
const int MOD = 998244353;
const int N = 2e5 + 5;
ll n, x, a[N];
ll dp0[N], dp1[N], dp2[N];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    fo(i, 1, n)
            cin >>
        a[i];
    dp0[0] = dp1[0] = dp2[0] = -1e12;
    ll ans = -1e12;
    fo(i, 1, n)
    {
        dp0[i] = max(dp0[i - 1] + a[i], a[i]);
        ll res = max(dp0[i - 1], dp1[i - 1]);
        dp1[i] = max(res + a[i] * x, a[i] * x);
        dp2[i] = max(dp1[i - 1], dp2[i - 1]) + a[i];
        ans = max({ans, dp0[i], dp1[i], dp2[i]});
        cout << dp0[i] << ' ';
    }
    cout << '\n';
    fo(i, 1, n)
    {
        cout << dp1[i] << ' ';
    }
    cout << '\n';
    fo(i, 1, n)
    {
        cout << dp2[i] << ' ';
    }
}
