#include <bits/stdc++.h>
#define lo long long
#define base 12800
using namespace std;
const int gh = 86;
int m, n, a[gh][gh], b[gh][gh], kq = 1 << 30;
bool dp[gh][gh][4 * gh * gh];
inline bool check(int sum)
{
    return sum >= 0 && sum < 4 * gh * gh;
}
void update(int u, int v, int i, int j, int sum)
{
    if (check(sum + a[u][v] - b[u][v]))
        dp[u][v][sum + a[u][v] - b[u][v]] |= dp[i][j][sum];
    if (check(sum - a[u][v] + b[u][v]))
        dp[u][v][sum - a[u][v] + b[u][v]] |= dp[i][j][sum];
}
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];
    dp[1][1][base + a[1][1] - b[1][1]] = dp[1][1][base + b[1][1] - a[1][1]] = 1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            for (int e = 0; e < 4 * gh * gh; e++)
            {
                if (dp[i][j][e])
                {
                    update(i + 1, j, i, j, e);
                    update(i, j + 1, i, j, e);
                }
            }
        }
    for (int e = 0; e < 4 * gh * gh; e++)
        if (dp[m][n][e])
            kq = min(kq, abs(base - e));
    cout << kq;
}