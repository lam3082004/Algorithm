#include <bits/stdc++.h>
using namespace std;
long long n, m, s, c, a[105], x;
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
    for (int i = 1; i <= m; i++)
    {
        cin >> s >> c;
        if (a[s] != 0 && a[s] != c)
        {
            cout << -1;
            return 0;
        }
        if (s == 1 && c == 0 && n != 1)
        {
            cout << -1;
            return 0;
        }
        a[s] = c;
    }
    cout << x;
    for (int i = 1; i <= n; i++)
    {
        x = x * 10 + a[i];
        if (n != 1 && a[1] == 0 && i == 1)
            x++;
    }
    cout << x << '\n';
}