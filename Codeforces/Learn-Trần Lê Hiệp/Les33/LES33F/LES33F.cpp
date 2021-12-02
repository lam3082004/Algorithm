#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], l[nmax], r[nmax], dem = 0;
bool d[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES33F.inp", "r", stdin);
    freopen("LES33F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        l[i] = i - 1;
        while (l[i] > 0 && a[i] > a[l[i]])
            l[i] = l[l[i]];
    }
    for (int i = n; i >= 0; i--)
    {
        r[i] = i + 1;
        while (r[i] <= n && a[i] > a[r[i]])
            r[i] = r[r[i]];
    }
    ll ans = 0;
    fo(i, 2, n - 1)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            fo(j, l[i] + 1, i - 1)
                d[a[j]] = 1;
            fo(j, i + 1, r[i] - 1)
                ans += d[a[i] - a[j]];
            fo(j, l[i] + 1, i - 1)
                d[a[j]] = 0;
        }
    }
    cout << ans;
}