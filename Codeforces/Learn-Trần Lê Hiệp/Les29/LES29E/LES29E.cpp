#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, k, f[2005][2005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES29E.inp", "r", stdin);
    freopen("LES29E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    fo(i, 0, n) f[i][0] = 1;
    fo(i, 1, n)
        fo(j, 1, i)(f[i][j] += f[i - 1][j - 1] + f[i - 1][j]) %= mod;
    fo(i, 1, k)
            cout
        << (f[k - 1][i - 1] * f[n - k + 1][i]) % mod << '\n';
}