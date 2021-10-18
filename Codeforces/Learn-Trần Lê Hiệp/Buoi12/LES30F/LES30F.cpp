#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll k, n, t, m, a[nmax], b[nmax], c[nmax];
ii p[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES30F.inp", "r", stdin);
    freopen("LES30F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k >> t;
    fo(i, 1, t)
    {
        cin >> k >> n;
        fo(j, 1, n) cin >> a[j];
    }
}