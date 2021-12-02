#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], l, r, q, t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> q;
    fo(i, 1, n) a[i] = 0;
    while (q--)
    {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    fo(i, 1, n) a[i] += a[i - 1];
    fo(i, 1, n) cout << a[i] << ' ';
}
