#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 200005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
ll n, a[nmax], t, x, y, s = 0, mx = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Slay.inp", "r", stdin);
    freopen("Slay.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        s += a[i];
        mx = max(mx, a[i]);
    }
    sort(a + 1, a + n + 1);
    // fo(i, 1, n) cout << a[i] << ' ';
    // cout << '\n';
    cin >> t;
    while (t--)
    {
        ll kq = 0, p;
        p = s;
        cin >> x >> y;
        if (x <= mx)
        {
            ll l = 1, r = n, pos = n, ans = 0;
            while (l <= r)
            {
                ll mid = l + r >> 1;
                if (a[mid] <= x)
                {
                    pos = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            ll l1 = 1, r1 = n, pos1 = n;
            while (l1 <= r1)
            {
                ll mid1 = l1 + r1 >> 1;
                if (a[mid1] >= x)
                {
                    pos1 = mid1;
                    r1 = mid1 - 1;
                }
                else
                    l1 = mid1 + 1;
            }
            // cout << min(a[pos1] - x + max(0ll, y - (s - a[pos1])), x - a[pos] + max(0ll, y - (s - a[pos])));
            cout << min(max(0ll, x - a[pos1]) + max(0ll, y - (s - a[pos1])), max(0ll, x - a[pos]) + max(0ll, y - (s - a[pos])));
        }
        else
        {
            s -= mx;
            kq += x - mx;
            if (s >= y)
                cout << kq;
            else
                cout << kq + y - s;
        }
        cout << '\n';
        s = p;
    }
}
