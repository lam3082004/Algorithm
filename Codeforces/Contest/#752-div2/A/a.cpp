#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a[nmax], r, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll s = 0, k = n + 1, maxx = 0;
        cin >> n;
        fo(i, 1, n) cin >> a[i];
        fo(i, 1, n)
            maxx = max(maxx, a[i] - i);
        cout << maxx;
        cout << '\n';
    }
}