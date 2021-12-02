
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int ans = 0, n;
int a[20], x[20][20], y[20][20];
int type[20];
void Try(int i)
{
    if (i == n + 1)
    {
        int cnt = 0;
        for (int t = 1; t <= n; ++t)
        {
            if (type[t] == 1)
            {
                for (int j = 1; j <= a[t]; ++j)
                {
                    if (type[x[t][j]] != y[t][j])
                        return;
                    type[x[t][j]] = y[t][j];
                }
                cnt++;
            }
        }
        ans = max(ans, cnt);
        return;
    }
    for (int j = 0; j < 2; ++j)
    {
        type[i] = j;
        Try(i + 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES34C.inp", "r", stdin);
    freopen("LES34C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        for (int j = 1; j <= a[i]; ++j)
            cin >> x[i][j] >> y[i][j];
    }
    ans = 0;
    Try(1);
    cout << ans;
}