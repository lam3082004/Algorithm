#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
const ll mod = 1e9 + 7;
ll n, k;
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
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    n++;
    if (k >= n)
    {
        cout << n % mod;
        return 0;
    }
    else
    {
        ll s = n / k;
        cout << mu(k, s) + n - s * k;
    }
}
