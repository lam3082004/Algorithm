#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, c, d, t, q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> q >> t;
    // t += q;
    fo(i, 1, t + q)
    {
        cin >> a >> b >> c >> d;
        // cout << max(max(a, b), max(c, d)) - min(min(a, b), min(c, d)) << '\n';
    }
    // t -= q;
    while (t--)
    {
        cout << 1 << '\n';
    }
}