#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 2000000
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
ll n, m, d[nmax + 5], t;
bool f[nmax + 5];
queue<ll> q;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    if (n > m)
    {
        cout << n - m;
        return 0;
    }
    memset(f, true, sizeof(f));
    d[n] = 0;
    f[n] = false;
    q.push(n);
    while (q.size())
    {
        t = q.front();
        q.pop();
        if (t == m)
        {
            cout << d[t];
            return 0;
        }
        if (t * 2 <= nmax && f[t * 2])
        {
            q.push(t * 2);
            d[t * 2] = d[t] + 1;
            f[t * 2] = false;
        }
        if (1 <= t && f[t - 1])
        {
            q.push(t - 1);
            d[t - 1] = d[t] + 1;
            f[t - 1] = false;
        }
    }
}
