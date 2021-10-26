#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
using namespace std;
const int base = 1e9 + 7;
ll n, m, a[nmax], t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Elimination.inp", "r", stdin);
    freopen("Elimination.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        int d[33] = {0};
        cin >> n;
        fo(i, 1, n) cin >> a[i];
        fo(i, 1, n)
        {
            fo(j, 0, 32)
            {
                if (a[i] & (1 << j))
                    d[j]++;
            }
        }
        fo(i, 1, n)
        {
            bool res = 1;
            fo(j, 0, 32)
            {
                if (d[j] % i != 0)
                {
                    res = 0;
                    break;
                }
            }
            if (res == 1)
                cout << i << " ";
        }
        cout << '\n';
    }
}
