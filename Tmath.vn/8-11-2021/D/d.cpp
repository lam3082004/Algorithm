#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
int n, k;
ll gt[N], inv[N];
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll t = mu(a, b / 2);
    t = (t * t) % MOD;
    if (b & 1)
        t = (t * a) % MOD;
    return t;
}
ll C(int k, int n)
{
    if (k > n)
        return 0;
    return ((gt[n] * inv[n - k]) % MOD * inv[k]) % MOD;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    gt[0] = 1;
    fo(i, 1, n)
        gt[i] = (gt[i - 1] * i) % MOD;
    inv[n] = mu(gt[n], MOD - 2);
    fod(i, n - 1, 0)
        inv[i] = (inv[i + 1] * (i + 1)) % MOD;
    ll ans = 0;
    fo(i, 1, min(n, k))
    {
        ans = (ans + C(i, n) * C(n - i - 1, n - 1)) % MOD;
        //        cout<<C(i,n)<<' '<<C(n-i-1,n-1)<<'\n';
    }
    cout << (ans + (k > 1)) % MOD;
}