#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, q, n, k;
ii a[nmax];
bool cmp(ii a, ii b)
{
    if (a.fi * b.se <= b.fi * a.se)
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    fo(i, 1, n) cin >> a[i].fi;
    fo(i, 1, n) cin >> a[i].se;
    sort(a + 1, a + n + 1, cmp);
    ll q = __gcd(a[k].fi, a[k].se);
    cout << a[k].fi / q << ' ' << a[k].se / q;
    cout << '\n';
}