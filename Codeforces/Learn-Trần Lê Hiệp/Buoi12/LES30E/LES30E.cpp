#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, x[nmax], y[nmax], dem = 0, x1 = 0;
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES30E.inp", "r", stdin);
    freopen("LES30E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    fo(i, 2, sqrt(a))
    {
        if (a % i == 0)
        {
            if (nt(i))
            {
                if (i * i == a)
                    x[++x1] = i;
                x[++x1] = i;
            }
            if (nt(a / i))
                x[++x1] = a / i;
        }
    }
    x[++x1] = 1;
    if (nt(a))
        x[++x1] = a;
    fo(i, 1, x1)
    {
        if (b % x[i] == 0)
            dem++;
        // cout << x[i] << ' ';
    }
    cout << dem;
}