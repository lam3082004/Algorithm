#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll t, a[nmax], n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll s = 0, k = 0, f[nmax], b[nmax];
        cin >> n;
        fo(i, 1, n) cin >> a[i];
        fo(i, 1, n - 1)
        {
            if (a[i] <= a[i + 1])
                s = 1;
        }
        if (s == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}
