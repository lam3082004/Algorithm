#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a, b;
ll s1 = 1, s2 = 1;
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
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> a >> b;
    fo(i, n - a + 1, n)
        s1 = (s1 * i) % mod;
    fo(i, 1, a)
        s1 = (s1 * mu(i, mod - 2)) % mod;
    fo(i, n - b + 1, n)
        s2 = (s2 * i) % mod;
    fo(i, 1, b)
        s2 = (s2 * mu(i, mod - 2)) % mod;
    cout << (((mu(2, n) - 1 + mod - s1) % mod + mod - s2) + mod) % mod;
}
