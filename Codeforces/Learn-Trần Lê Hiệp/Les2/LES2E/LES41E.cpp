#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, c, m, x;
ll cs(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += x / 5;
        x /= 5;
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES41E.inp", "r", stdin);
    freopen("LES41E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> m;
        ll l = 1, r = 10e17, pos = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (cs(mid) >= m)
            {
                pos = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << pos;
        cout << '\n';
    }
}
