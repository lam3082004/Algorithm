#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1005
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
const int mod = 998244353;
ll n, a[nmax], dem = 0, s = 0, f[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n) s += a[i];
    fo(i, 1, n)
    {
        if (s == 2 * a[i])
        {
            cout << a[i];
            return 0;
        }
    }
    cout << "N";
}
