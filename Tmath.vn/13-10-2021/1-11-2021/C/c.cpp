#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
const int mod = 998244353;
int n, a[105][105], f[105][105], maxx = -1e9;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n)
            fo(j, 1, i) cin >>
        a[i][j];
    f[1][1] = a[1][1];
    fo(i, 2, n)
        fo(j, 1, i) f[i][j] = max(f[i - 1][j] + a[i][j], f[i - 1][j - 1] + a[i][j]);
    fo(i, 1, n) maxx = max(maxx, f[n][i]);
    cout << maxx;
}
