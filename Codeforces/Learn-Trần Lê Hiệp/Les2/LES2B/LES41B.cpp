#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, q, a[nmax], x, pos1, pos2;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES41B.inp", "r", stdin);
    freopen("LES41B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    cin >> q;
    while (q--)
    {
        cin >> x;
        pos1 = lower_bound(a + 1, a + n + 1, x) - a;
        pos2 = upper_bound(a + 1, a + n + 1, x) - a;
        // cout << pos2 << ' ' << pos1;
        cout << pos2 - pos1;
        cout << '\n';
    }
}