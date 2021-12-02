#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll m, n, k, maxx = 0;
ll a[nmax], b[nmax], s[nmax], g[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES40C.inp", "r", stdin);
    freopen("LES40C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m >> k;
    fo(i, 1, n)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    fo(i, 1, m)
    {
        cin >> b[i];
        g[i] = g[i - 1] + b[i];
    }
    fo(i, 0, n)
    {
        ll l = 0, r = m, pos = 0;
        if (s[i] > k)
            break;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (g[mid] + s[i] <= k)
            {
                pos = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        maxx = max(maxx, pos + i);
    }
    cout << maxx;
}