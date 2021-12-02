#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<ll, ll>
#define fi first
#define se second
using namespace std;
ll n, m, a[nmax], b[nmax];
bool check(ll x)
{
    int j = 1;
    fo(i, 1, m)
    {
        if (a[i] >= x)
            continue;
        while ((a[i] + b[j]) < x && j <= n)
            j++;
        if (j > n)
            return false;
        j++;
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES41F.inp", "r", stdin);
    freopen("LES41F.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m;
    fo(i, 1, m) cin >> a[i];
    cin >> n;
    fo(i, 1, n) cin >> b[i];
    ll l = 0, r = 1e9, pos = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            pos = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << pos;
}
