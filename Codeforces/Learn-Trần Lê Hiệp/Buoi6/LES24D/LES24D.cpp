#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, a[nmax], f[nmax], dp[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES24D.inp", "r", stdin);
    freopen("LES24D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> m >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    f[0] = 1;
    f[1] = 1;
    fo(i, 2, m)
    {
        if (dp[i] == 1)
            f[i] = 0;
        else
        {
            f[i] = (f[i - 1] + f[i - 2]) % mod;
        }
    }
    cout << f[m] % mod;
}