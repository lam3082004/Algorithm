#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
ll t, n, a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        ll s = 0, kq = 0, p;
        map<ll, ll> f;
        cin >> n;
        fo(i, 1, n)
        {
            cin >> a[i];
            s += a[i];
            f[a[i]]++;
        }
        p = 2 * s;
        s = p / n;
        fo(i, 1, n)
        {
            kq += f[s - a[i]];
            if (a[i] == s - a[i])
                kq -= 1;
        }
        if (p % n != 0)
            kq = 0;
        cout << kq / 2 << '\n';
    }
}
