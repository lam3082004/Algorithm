#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
ll t, n, m, a[N];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("new.inp", "r", stdin);
    freopen("new.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        fo(i, 1, n)
                cin >>
            a[i];
        sort(a + 1, a + 1 + n);
        ll ans = a[1], res = a[1];
        fo(i, 2, n)
        {
            a[i] -= res;
            ans = max(ans, a[i]);
            res += a[i];
        }
        cout << ans << '\n';
    }
}