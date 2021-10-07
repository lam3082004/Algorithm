#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, n, h, s, dem, a[nmax], p, k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("GamerHemose.inp", "r", stdin);
    freopen("GamerHemose.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        s = 0;
        cin >> n >> h;
        fo(i, 1, n) cin >> a[i];
        sort(a + 1, a + n + 1, greater<ll>());
        if (a[1] >= h)
            cout << 1;
        else
        {
            s = h / (a[1] + a[2]); //16
            p = h % (a[1] + a[2]);
            if (p == 0)
                cout << 2 * s;
            else if (p > 0 && p <= a[1])
                cout << 2 * s + 1;
            else
                cout << 2 * s + 2;
        }
        cout << '\n';
    }
}
