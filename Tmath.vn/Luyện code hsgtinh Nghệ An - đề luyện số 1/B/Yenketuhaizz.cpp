#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 10000005
using namespace std;
ll n, a[105][105], maxx = 0, t, f[2 * nmax];
bool NT[nmax];
void snt()
{
    memset(NT, true, sizeof NT);
    NT[1] = NT[0] = false;
    for (int i = 2; i * i <= nmax; i++)
        if (NT[i])
            for (int j = i * i; j <= nmax; j += i)
                NT[j] = false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    snt();
    f[1] = 0;
    fo(i, 2, nmax)
    {
        f[i] = f[i - 1] + NT[i];
    }
    cin >> t;
    fo(i, 1, t)
    {
        cin >> n;
        cout << f[2 * n] - f[n] << '\n';
    }
}
