#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
pair<int, ll> f[nmax];
ll t, y, n, a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Lower.inp", "r", stdin);
    freopen("Lower.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    for (int i = n; i >= 1; i--)
    {
        f[a[i]].fi++;
        f[a[i]].se = i;
    }
    cin >> t;
    while (t--)
    {
        cin >> y;
        if (f[y].fi > 0)
            cout << "Yes" << ' ' << f[y].se;
        else
        {
            while (f[y].fi <= 0)
            {
                y++;
            }
            cout << "No" << ' ' << f[y].se;
        }
        cout << '\n';
    }
}
