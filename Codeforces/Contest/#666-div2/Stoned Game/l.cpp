#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll t, n, a[nmax], maxx = 1e18, ans = 1e18;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll s = 0;
        cin >> n;
        fo(i, 1, n)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a + 1, a + n + 1, greater<ll>());
        if (2 * a[1] > s || s % 2 == 1)
            cout << "T";
        else
            cout << "HL";
        cout << '\n';
    }
}
