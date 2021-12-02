#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll k, n, a[nmax], minn = 1e9, s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES37B.inp", "r", stdin);
    freopen("LES37B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n - 1)
        s += a[i + 1] - a[i];
    fo(i, 1, n - 1)
        s = min(s, -a[i + 1] + a[i] + k);
    cout << s;
}