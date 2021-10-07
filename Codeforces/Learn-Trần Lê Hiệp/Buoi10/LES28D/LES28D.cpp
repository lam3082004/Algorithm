#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, m, x1, x2, xx, yy, x, y, k;
int c[1005][1005], dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
char a[1005][1005], ans[4] = {'U', 'R', 'D', 'L'};
queue<ii> q;
bool b[1005][1005];
string s;
void bfs(int i, int j)
{
    if (i <= 0 || i > n || j <= 0 || j > m || b[i][j] || a[i][j] == '#')
        return;
    q.push({i, j});
    b[i][j] = 1;
    c[i][j] = k;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES28D.inp", "r", stdin);
    freopen("LES28D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n)
    {
        cin >> s;
        fo(j, 0, m - 1)
        {
            a[i][j + 1] = s[j];
            if (a[i][j + 1] == 'A')
            {
                x1 = i;
                x2 = j + 1;
            }
            if (a[i][j + 1] == 'B')
            {
                xx = i;
                yy = j + 1;
            }
        }
    }
    b[x1][x2] = 1;
    q.push({x1, x2});
    while (!q.empty())
    {
        x = q.front().fi;
        y = q.front().se;
        q.pop();
        k = 0;
        while (k <= 3)
        {
            bfs(x + dx[k], y + dy[k]);
            k++;
        }
    }
    if (b[xx][yy] == 1)
    {
        cout << "YES" << '\n';
        string s = "";
        while (true)
        {
            if (xx == x1 && yy == x2)
                break;
            int pos = c[xx][yy];
            s += ans[pos];
            xx -= dx[pos];
            yy -= dy[pos];
        }
        cout << s.size() << '\n';
        reverse(s.begin(), s.end());
        for (auto i : s)
            cout << i;
    }
    else
        cout << "NO";
}