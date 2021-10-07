#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll m, n, k, sum = 0, ans = 0;
char a[2005][2005];
ll row1[2005][2005], row2[2005][2005];
ll col1[2005][2005], col2[2005][2005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES24F.inp", "r", stdin);
    freopen("LES24F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n)
            fo(j, 1, m) cin >>
        a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '.')
            {
                row1[i][j] = row1[i][j - 1] + 1;
            }
            else
            {
                row1[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[j][i] == '.')
            {
                col1[j][i] = col1[j - 1][i] + 1;
            }
            else
            {
                col1[j][i] = 0;
            }
        }
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = m; j >= 1; j--)
        {
            if (a[i][j] == '.')
            {
                row2[i][j] = row2[i][j + 1] + 1;
            }
            else
            {
                row2[i][j] = 0;
            }
        }
    }
    for (int i = m; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (a[j][i] == '.')
            {
                col2[j][i] = col2[j + 1][i] + 1;
            }
            else
            {
                col2[j][i] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '.')
            {
                sum = row1[i][j - 1] + row2[i][j + 1] + col1[i - 1][j] + col2[i + 1][j];
                ans = max(ans, sum + 1);
            }
        }
    }
    cout << ans;
}