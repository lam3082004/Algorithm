#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a[nmax], n, q, l, r, f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("tmath.inp", "r", stdin);
    freopen("tmath.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> q;
    fo(i, 1, n) cin >> a[i];
    f[0] = 0;
    fo(i, 1, n)
    {
        if (a[i] > 0)
            f[i] = f[i - 1] + a[i];
        else
            f[i] = f[i - 1];
    }
    while (q--)
    {
        cin >> l >> r;
        cout << f[r] - f[l - 1] << '\n';
    }
}