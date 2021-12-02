#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define matrix vector<vector<ll>>
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
const ll BASE = oo;
ll n, a[nmax], kq = -1e18, dp[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    dp[1] = a[1];
    fo(i, 2, n)
        dp[i] = max(dp[i - 1], a[i]);
    fo(i, 2, n)
        kq = max(kq, dp[i] - a[i]);
    if (kq <= 0)
        cout << -1;
    else
        cout << kq;
}
