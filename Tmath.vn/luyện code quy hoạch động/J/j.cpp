#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int q, n, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> q;
    while (q--)
    {
        int f[nmax], s[nmax], t[nmax], p[nmax];
        int maxx = -1e9;
        cin >> n;
        fo(i, 1, n)
        {
            cin >> a[i];
            t[i] = t[i - 1] + a[i];
        }
        t[0] = 0;
        fo(i, 1, n) p[i] = min(p[i - 1], t[i]);
        fo(i, 1, n) maxx = max(maxx, t[i] - p[i]);
        f[1] = a[1];
        fo(i, 2, n) f[i] = max(f[i - 1], f[i - 1] + a[i]);
        sort(a + 1, a + n + 1, greater<ll>());
        s[1] = a[1];
        fo(i, 2, n) s[i] = max(s[i - 1], s[i - 1] + a[i]);
        cout << maxx << ' ' << s[n];
        cout << '\n';
    }
}
