#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1005
using namespace std;
int m, n, s, t;
bool vs[nmax][nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> x >> y;
    //    NT[0][0]=true;
    cin >> n >> m >> s >> t;
    while (!vs[s][t])
    {
        cout << s << ' ' << t << '\n';
        vs[s][t] = true;
        bool visit = false;
        for (int i = s + 1; i <= n && !visit; ++i)
            if (!vs[i][t])
                s = i, visit = true;
        for (int i = s - 1; i > 0 && !visit; --i)
            if (!vs[i][t])
                s = i, visit = true;
        for (int i = t + 1; i <= m && !visit; ++i)
            if (!vs[s][i])
                t = i, visit = true;
        for (int i = t - 1; i > 0 && !visit; --i)
            if (!vs[s][i])
                t = i, visit = true;
    }
}
