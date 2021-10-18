#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, n, z = 0, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE  1
    cin >> t;
    while (t--)
    {
        int kq = 0, z = 0, a[nmax], ans = 0;
        cin >> n;
        if (n % 25 == 0)
            cout << 0 << '\n';
        else
        {
            while (n > 0)
            {
                a[++z] = n % 10;
                n /= 10;
            }
            fo(i, 1, z - 1)
            {
                if (a[i] == 5)
                {
                    fo(j, i + 1, z)
                    {
                        if (a[j] == 7 || a[j] == 2)
                        {
                            kq = j - i - 1;
                            ans = i - 1;
                            break;
                        }
                        else
                            kq = 0, ans = 0;
                    }
                }
                else if (a[i] == 0)
                {
                    fo(j, i + 1, z)
                    {
                        if (a[j] == 0 || a[j] == 5)
                        {
                            kq = j - i - 1;
                            ans = i - 1;
                            break;
                        }
                        else
                            kq = 0, ans = 0;
                    }
                }
            }
            cout << ans + kq << '\n';
        }
    }
}