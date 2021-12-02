#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], b[nmax], c[nmax], s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES29B.inp", "r", stdin);
    freopen("LES29B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n) cin >> b[i];
    fo(i, 1, n - 1) cin >> c[i];
    fo(i, 1, n)
    {
        s += b[a[i]];
        if (a[i + 1] == a[i] + 1)
            s += c[a[i]];
    }
    cout << s;
}