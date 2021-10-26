#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ii pair<ll, ll>
#define fi first
#define se second
#define nmax 105
using namespace std;
const int mod = 1e9 + 7;
ll t, b[nmax], c[nmax], n, m;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Red.inp", "r", stdin);
    freopen("Red.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        ll a = 0, s = 0, mx = 0, mx2 = 0;
        cin >> n;
        fo(i, 1, n)
        {
            cin >> b[i];
            a += b[i];
            mx = max(mx, a);
        }
        cin >> m;
        fo(i, 1, m)
        {
            cin >> c[i];
            s += c[i];
            mx2 = max(mx2, s);
        }
        cout << mx2 + mx;
        cout << '\n';
    }
}