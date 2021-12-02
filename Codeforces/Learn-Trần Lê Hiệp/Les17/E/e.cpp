#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9;
using namespace std;
ll n, a[nmax], b[nmax], dp[nmax], sum[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i] >> b[i];
    dp[0] = sum[0] = 1;
    fo(i, 1, n)
    {
        dp[i] = (0LL + sum[b[i]] - sum[a[i] - 1] + dp[i] + mod) % mod;
        sum[i] = (sum[i - 1] + dp[i]) % mod;
    }
    cout << dp[n] % mod;
}
