#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], q, b, c, s = 0, f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES40D.inp", "r", stdin);
    freopen("LES40D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        s += a[i];
        f[a[i]]++;
    }
    cin >> q;
    while (q--)
    {
        cin >> b >> c;
        s -= f[b] * (b - c);
        f[c] += f[b];
        f[b] = 0;
        cout << s;
        cout << '\n';
    }
}