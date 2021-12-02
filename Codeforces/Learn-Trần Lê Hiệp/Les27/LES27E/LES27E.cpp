#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, s = 0, b[nmax], t = 0, z = 0;
ii a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES27E.inp", "r", stdin);
    freopen("LES27E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + n + 1);
    if (a[1].fi > m)
    {
        cout << 0;
        return 0;
    }
    fo(i, 1, n - 1)
    {
        if (a[i].fi - i + 1 <= m)
        {
            if (a[i].fi == a[i + 1].fi)
                z = max(a[i].se, a[i + 1].se);
            else
                z = 0;
            if (a[i].fi != a[i + 1].fi && a[i].fi != a[i - 1].fi)
                b[++t] = a[i].se;
            else
                b[++t] = z;
        }
        // cout << z << ' ';
    }
    // sort(b + 1, b + t + 1, greater<ll>());
    fo(i, 1, t)
    {
        // cout << b[i] << ' ';
        s += b[i];
    }
    cout << s;
}