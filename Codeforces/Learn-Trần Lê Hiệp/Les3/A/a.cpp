#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, n;
ll f(ll x)
{
    return (x * x * x - 2 * x + 5);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    // ll x = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll l = 1, r = 1e6, pos = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (f(mid) >= n)
            {
                pos = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (f(pos) != n)
            cout << -1;
        else
            cout << pos;
        cout << '\n';
    }
}