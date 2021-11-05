#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
#define ii pair<ll, ll>
#define fi first
#define se second
using namespace std;
ll n, a[nmax], m;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << n << " " << n << '\n';
        cout << -a[n] << '\n';
        cout << n << " " << n << '\n';
        cout << 0 << '\n';
        cout << n << " " << n << '\n';
        cout << 0 << '\n';
    }
    else
    {
        m = n - 1;
        cout << 1 << " " << n << '\n';
        for (int i = 1; i <= n; ++i)
            cout << -a[i] * n << " ";
        cout << '\n';
        cout << 1 << " " << m << '\n';
        for (int i = 1; i <= m; ++i)
            cout << a[i] * m << " ";
        cout << '\n';
        cout << n << " " << n << '\n';
        cout << a[n] * m << '\n';
    }
}
