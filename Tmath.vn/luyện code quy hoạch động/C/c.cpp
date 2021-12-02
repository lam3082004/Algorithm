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
bool nt(ll x)
{
    if (x < 2)
        return false;
    fo(i, 2, sqrt(x))
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
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
    f[1] = 1;
    f[2] = 1;
    fo(i, 3, 80) f[i] = f[i - 1] + f[i - 2];
    int t = 80;
    while (t > 0)
    {
        if (f[t] <= n)
        {
            if (nt(f[t]))
            {
                cout << f[t];
                return 0;
            }
            else
                t--;
        }
        else
            t--;
    }
}
