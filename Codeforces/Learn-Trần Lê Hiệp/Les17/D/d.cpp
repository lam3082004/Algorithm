#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], l, r, q, k, b[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> q;
    // fo(i, 1, n) cin >> b[i];
    fo(i, 1, n) a[i] = 0;
    while (q--)
    {
        cin >> l >> r >> k;
        while (l % k != 0)
            l++;
        while (r % k != 0)
            r--;
        for (int i = l; i <= r; i += k)
            a[i]++;
    }
    fo(i, 1, n) cout << a[i] << ' ';
}
