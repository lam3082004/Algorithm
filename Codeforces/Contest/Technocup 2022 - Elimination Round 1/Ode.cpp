#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 105
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int t;
bool nt(int x)
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
#ifndef ONLINE_JUDGE
    freopen("Ode.inp", "r", stdin);
    freopen("Ode.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // fo(i, 1, 10000000)
    //     fo(j, 1, i)
    //         f[i * j] += i;
    cin >> t;
    while (t--)
    {
        int n, p[nmax], s = 0, k = 0;
        int a[nmax];
        cin >> n;
        fo(i, 1, n)
        {
            cin >> a[i];
            s += a[i];
        }
        if (nt(s) == 1)
        {
            cout << n << endl;
            for (int i = 1; i <= n; ++i)
            {
                cout << i << ' ';
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; ++i)
            {
                if (a[i] % 2 != 0)
                {
                    if (s - a[i] == 2)
                    {
                        cout << 1 << endl
                             << i << endl;
                        break;
                    }
                    else
                    {
                        // cout << n - 1 << endl;
                        for (int z = 1; z <= n; ++z)
                        {
                            if (z != i)
                                p[++k] = z;
                        }
                    }
                }
            }
            cout << k << '\n';
            fo(i, 1, k)
                    cout
                << p[i] << ' ';
            cout << endl;
        }
    }
}
