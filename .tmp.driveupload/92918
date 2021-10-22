#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000000
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
ll t, n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Divide.inp", "r", stdin);
    freopen("Divide.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // fo(i, 1, nmax)
    //     fo(j, 1, nmax / i)
    //         f[i * j] += i;
    // fo(i, 1, 20) cout << f[i] << ' ';
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << 0 << '\n';
        else
        {
            int i = 2, k = 0;
            while (i <= sqrt(n))
            {
                if (n % i == 0)
                {
                    k = i;
                    break;
                }
                i++;
            }
            // cout << k << ' ';
            if (k == 2)
                cout << 2 << '\n';
            else
            {
                if (k == 0)
                {
                    if (n <= 3)
                        cout << n - 1 << '\n';
                    else
                        cout << 3 << '\n';
                }
                else
                    cout << 3 << '\n';
            }
        }
    }
}
