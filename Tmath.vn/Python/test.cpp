#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 998244353;
const int nmax = 2e5 + 5;
long long n, f[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    f[1] = 1;
    f[2] = 1;
    fo(i, 3, 80)
        f[i] = f[i - 1] + f[i - 2];
    fo(i, 1, 80) cout << f[i] << ' ';
}
