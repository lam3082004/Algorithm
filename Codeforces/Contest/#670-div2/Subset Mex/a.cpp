#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll t, n, a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll dem = 0, s = 0, f[nmax], z = 0, k = 0;
        fo(i, 0, 100) f[i] = 0;
        cin >> n;
        fo(i, 1, n)
        {
            cin >> a[i];
            f[a[i]]++;
        }
        fo(i, 0, 100) if (f[i] == 0)
        {
            s += i;
            break;
        }
        fo(i, 0, 100) if (f[i] == 1 || f[i] == 0)
        {
            s += i;
            break;
        }
        cout << s;
        cout << '\n';
    }
}
