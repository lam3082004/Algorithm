#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, m, x, y, dem = 0;
char a[1005][1005];
bool check[1005][1005];
queue<ii> q;
string s;
void bfs(int i, int j)
{
    if (i <= 0 || i > n || j <= 0 || j > m || check[i][j] || a[i][j] == '#')
        return;
    q.push({i, j});
    check[i][j] = 1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES32E.inp", "r", stdin);
    freopen("LES32E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n)
    {
        cin >> s;
        fo(j, 0, m - 1) a[i][j + 1] = s[j];
    }
    fo(i, 1, n)
    {
        fo(j, 1, m)
        {
            if (a[i][j] == '.' && check[i][j] == false)
            {
                dem++;
                q.push({i, j});
                check[i][j] = 1;
                while (!q.empty())
                {
                    x = q.front().fi;
                    y = q.front().se;
                    q.pop();
                    bfs(x + 1, y);
                    bfs(x, y + 1);
                    bfs(x - 1, y);
                    bfs(x, y - 1);
                }
            }
        }
    }
    cout << dem;
}