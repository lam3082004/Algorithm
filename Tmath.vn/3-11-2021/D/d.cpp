#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll n, m, s = 0, b[nmax], f[nmax];
ii a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, m)
    {
        cin >> a[i].fi >> a[i].se;
    }
    fo(i, 1, n) b[i] = 1;
    f[1] = 1;
    fo(i, 1, m)
    {
        if (f[a[i].fi] == 1)
            f[a[i].se] = 1;
        b[a[i].fi]--,
            b[a[i].se]++;
        if (b[a[i].fi] == 0)
            f[a[i].fi] = 0;
    }
    fo(i, 1, n)
    {
        if (f[i] == 1 && b[i] > 0)
            s++;
    }
    cout << s;
}
