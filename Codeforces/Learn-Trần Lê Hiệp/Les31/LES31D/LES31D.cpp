#include <bits/stdc++.h>
#define ll long long
#define BIT(x, k) (((x) >> (k - 1)) & 1)
#define off(x, k) ((x) ^ (1 << (i - 1)))
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, a[20][20], f[20][(1 << 17)], kq = INT_MAX;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES31D.inp", "r", stdin);
    freopen("LES31D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
            fo(j, 1, n) cin >>
        a[i][j];
    memset(f, 0x3f, sizeof(f));
    fo(i, 1, n)
        f[i][1 << (i - 1)] = 0;
    fo(mask, 1, (1 << n) - 1)
        fo(i, 1, n) if (BIT(mask, i))
    {
        fo(j, 1, n) if (BIT(mask, j))
            f[i][mask] = min(f[i][mask], f[j][off(mask, i)] + a[j][i]);
        kq = min(kq, f[i][(1 << n) - 1]);
    }
    cout << kq;
}