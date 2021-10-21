#include <bits/stdc++.h>
#define ll long long
#define nmax 1000005
#define fo(i, a, b) for (int i = a; i <= b; i++)
ll n, a[nmax], b[nmax], c[nmax], maxx = -1e18;
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    b[1] = a[1];
    c[1] = a[1];
    fo(i, 2, n)
    {
        b[i] = max(b[i - 1], a[i]);
        c[i] = max(c[i - 1], b[i - 1] - a[i]);
    }
    fo(i, 1, n)
        maxx = max(maxx, c[i - 1] + a[i]);
    cout << maxx;
}
