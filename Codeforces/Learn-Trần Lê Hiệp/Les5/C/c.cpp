#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m >> k;
    ll l = 1, r = 1e9, pos = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (n >= 2 * mid && m >= mid && n + m - k >= 3 * mid)
        {
            pos = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << pos;
}
