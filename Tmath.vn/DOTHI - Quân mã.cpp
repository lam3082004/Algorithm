#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 100006
using namespace std;
const int h[] = {2, 2, -2, -2, 1, 1, -1, -1};
const int c[] = {1, -1, 1, -1, 2, -2, 2, -2};
int res[1005][1005];
int m, n, u, v, x2, y2, x, y, dem = 0;
bool vs[1005][1005];
queue<pair<int,int>> q;
bool Check(int x, int y)
{
    if (x < 1 || x > m || y < 1 || y > n)
        return false;
    if (vs[x][y])
        return false;
    return true;
}
void BFS()
{
    while (!q.empty())
    {
        int x = q.front().fi;
        int y = q.front().se;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int u = x + h[i];
            int v = y + c[i];
            if (!Check(u, v))
                continue;
            res[u][v] = res[x][y] + 1;
            if (u == x2 && y == x2)
            {
                cout << res[u][v];
                exit(0);
            }
            vs[x + h[i]][y + c[i]] = 1;
            q.push({x + h[i], y + c[i]});
        }
    }
    cout << -1;
}
int main()
{
        ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    memset(vs, false, sizeof vs);
    cin >> m >> n;
    cin >> u >> v;
    cin >> x2 >> y2;
    res[u][v] = 0;
    vs[u][v] = true;
    q.push({u, v});
    while (!q.empty())
    {
        int x = q.front().fi;
        int y = q.front().se;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int un = x + h[i];
            int vn = y + c[i];
            if (!Check(un, vn))
                continue;
            res[un][vn] = res[x][y] + 1;
            if (un == x2 && vn == y2)
            {
                cout << res[un][vn];
                exit(0);
            }
            vs[x + h[i]][y + c[i]] = 1;
            q.push({x + h[i], y + c[i]});
        }
    }
    cout << -1;
}