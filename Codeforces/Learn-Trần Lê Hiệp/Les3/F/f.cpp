#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, k;
ll check(ll x)
{
    ll ans = 0;
    for (ll i = n; i >= 1; i--)
        ans += min(x / i, m);
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("f.inp", "r", stdin);
    freopen("f.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m >> k;
    ll l = 1, r = m * n, pos = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid) >= k)
        {
            pos = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << pos;
}
