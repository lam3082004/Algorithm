#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, f[105];
bool nt(ll n)
{
    if (n < 2)
        return false;
    fo(i, 2, sqrt(n))
    {
        if (n % i == 0)
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
    freopen("fibo.inp", "r", stdin);
    freopen("fibo.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    f[1] = 1;
    f[2] = 1;
    fo(i, 3, 95)
        f[i] = f[i - 1] + f[i - 2];
    for (int i = 82; i >= 1; i--)
    {
        if (nt(f[i]))
        {
            if (f[i] <= n)
            {
                cout << f[i];
                return 0;
            }
        }
    }
}