#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, n, res;
ll gt[1000005];
ll Pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll t = Pow(a, b / 2);
    if (b % 2)
        return t * t % mod * a % mod;
    return t * t % mod;
}
bool check(ll i)
{
    while (i > 0)
    {
        if (i % 10 != a && i % 10 != b)
            return 0;
        i /= 10;
    }
    return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b >> n;
    gt[0] = 1;
    for (int i = 1; i <= 1e6; i++)
        gt[i] = gt[i - 1] * i % mod;
    for (int i = 0; i <= n; i++)
        if (check(i * a + (n - i) * b))
            res = (res + gt[n] * Pow(gt[i], mod - 2) % mod * Pow(gt[n - i], mod - 2) % mod) % mod;
    cout << res;
}