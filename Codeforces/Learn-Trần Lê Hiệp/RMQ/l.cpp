#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
const int base = 1e9 + 7;
ll n, a[nmax], f[nmax][20];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n) f[i][0] = a[i];
    for (int j = 1; (1 << j) <= n; j++)
        for (int i = 1; i + (1 << j) - 1 <= n; i++)
            f[i][j] = min(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
    int k = trunc(log(n - 1 + 1) / log(2));
    cout << min(f[1][k], f[n - (1 << k) + 1][k]);
}
