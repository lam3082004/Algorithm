#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, q, a[nmax], b[nmax], r, l;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("IDP0105A.inp", "r", stdin);
    freopen("IDP0105A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> q;
    fo(i, 1, n) cin >> a[i];
    b[1] = a[1];
    fo(i, 2, n)
        b[i] = max(b[i - 1], b[i - 1] + a[i]);
    while (q--)
    {
        cin >> l >> r;
        cout << b[r] - b[l - 1] << '\n';
    }
}