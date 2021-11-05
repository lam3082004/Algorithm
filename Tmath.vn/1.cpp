#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll X, K, m[10000], p[10000], d, s, a[20], b[20], t;
void C(ll x, ll k)
{
    fo(i, a[x - 1] + 1, t - k + x) if (b[i] == 0)
    {
        a[x] = i;
        b[i] = 1;
        if (x == k)
        {
            ll n = 1;
            fo(j, 1, k)
                n *= m[a[j]];
            p[++d] = n;
        }
        else
            C(x + 1, k);
        b[i] = 0;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> X >> K;
    // tim uoc
    fo(i, 2, sqrt(X)) if (X % i == 0)
    {
        m[++t] = i;
        while (X % i == 0)
            X /= i;
    }
    if (X > 1)
        m[++t] = X;
    fo(i, 1, t) cout << m[i] << ' ';
    cout << '\n';
    fo(i, 1, t)
    {
        d = 0;
        C(1, i);
        if (i % 2 == 1)
            fo(j, 1, d) s += K / p[j];
        else
            fo(j, 1, d) s -= K / p[j];
    }
    cout << K - s;
}