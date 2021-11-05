#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], dp[nmax], b[nmax];
inline int cal(int x)
{
    if (x > 3)
        return 0;
    if (x == 0)
        return 0;
    if (x == 1)
        return 3;
    if (x == 2)
        return 6;
    if (x == 3)
        return 6;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES33E.inp", "r", stdin);
    freopen("LES33E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    dp[0] = 1;
    fo(i, 1, n)
    {
        if (a[i] == 0)
            dp[i] = dp[i - 1];
        else
        {
            dp[i] = b[a[i] - 1] * dp[i - 1] % mod;
            b[a[i] - 1]--;
        }
        b[a[i]]++;
    }
    b[0] = 0;
    for (int i = 1; i <= n; ++i)
        b[a[i]]++;
    ll k = dp[n];
    if (b[0] == 2 || b[0] == 3)
        cout << 6 * k % mod;
    else if (b[0] == 1)
        cout << 3 * k % mod;
    else
        cout << 0 * k;
}