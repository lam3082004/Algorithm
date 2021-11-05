#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, t = 0, f[nmax];
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
bool check(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += (x % 10) * (x % 10);
        x /= 10;
    }
    if (nt(s))
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, 1000000)
    {
        if (check(i))
            f[++t] = i;
    }
    // cout << t << '\n';
    cout << f[n];
}