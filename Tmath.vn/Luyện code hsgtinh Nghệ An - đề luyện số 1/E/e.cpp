#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 10000005
using namespace std;
const ll mod = 1e9 + 7;
bool NT[nmax + 1];
void sieve()
{
    for (int i = 0; i <= nmax; i++)
        NT[i] = true;
    NT[0] = false;
    NT[1] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (NT[i] == true)
        {
            for (int j = i * i; j <= nmax; j += i)
                NT[j] = false;
        }
    }
}
ll f[nmax], t, a, b, d[nmax], s[nmax], dem = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    fo(i, 1, 1000000)
    {
        f[i] = f[i - 1];
        d[i] = d[i - 1];
        s[i] = s[i - 1];
        if (NT[i])
        {
            dem++;
            f[i] = (f[i] + 1ll * dem * i) % mod;
            d[i]++;
            s[i] = (s[i] + i) % mod;
        }
    }
    cout << 1;
}
