#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, id, a, b;
ll gt[nmax], inv[nmax], kq;
bool check(int x)
{
    while (x > 0)
    {
        int s = x % 10;
        if (s != a && s != b)
            return false;
        x /= 10;
    }
    return true;
}
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2);
    tam = (tam * tam) % mod;
    if (b % 2 == 1)
        tam = (tam * a) % mod;
    return tam;
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
    gt[0] = 1;
    fo(i, 1, 1000000)
        gt[i] = (gt[i - 1] * i) % mod;
    inv[1000000] = mu(gt[1000000], mod - 2);
    for (ll i = 1000000 - 1; i >= 0; --i)
        inv[i] = (inv[i + 1] * (i + 1)) % mod;
    cin >> a >> b >> n;
    fo(i, 0, n) if (check(i * a + (n - i) * b))
        kq = (kq + ((gt[n] * inv[i]) % mod * inv[n - i]) % mod) % mod;
    cout << kq;
}
