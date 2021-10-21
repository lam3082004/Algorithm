#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define ii pair<int, int>
#define fi first
#define se second
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int mod = 1e9 + 7;
const int nmax = 1e3 + 5;
int n, m, a[nmax], b[nmax], dp[nmax][nmax], ans = 0;
string s, t;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    fo(i, 1, n)
            cin >>
        a[i];
    fo(i, 1, m)
            cin >>
        b[i];
    fo(i, 1, n)
        fo(j, 1, m)
    {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        if (a[i] == b[j])
        {
            if (i == 1 || j == 1)
                dp[i][j] = 1;
            else
                dp[i][j] = max(dp[i][j], dp[i - 2][j - 2] + 1);
        }
        ans = max(ans, dp[i][j]);
    }
    cout << ans;
}