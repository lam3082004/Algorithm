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
const int N = 3e5 + 5;
int n, f[N], d[N];
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("AB-string.inp", "r", stdin);
    freopen("AB-string.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> s;
    s = ' ' + s;
    d[n] = n;
    fo(i, 1, n)
        f[i] = f[i - 1] + (s[i] == 'A');
    fod(i, n - 1, 1) if (s[i] == s[i + 1])
        d[i] = d[i + 1];
    else d[i] = i;
    // fo(i, 1, n) cout << f[i] << ' ';
    // cout << '\n';
    ll ans = 1LL * n * (n + 1) / 2;
    fo(i, 1, n)
    {
        int l = i, r = n, pos = i;
        while (l <= r)
        {
            int mid = l + r >> 1;
            if ((s[i] == 'A' && f[mid] == f[i]) ||
                (s[i] == 'B' && f[mid] - mid == f[i] - i))
            {
                l = mid + 1;
                pos = mid;
            }
            else
                r = mid - 1;
        }
        ans -= (pos - i + 1);
        if (d[i] < n)
            ans--;
        if (max(s[i], s[i - 1]) == 'B' && min(s[i], s[i - 1]) == 'A')
            ans++;
    }
    cout << ans;
}