#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define ii pair<int, int>
#define fi first
#define se second
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int mod = 1e9 + 7;
ll n, k = 0, a[50][50], q[50], t = 0;
bool ok;
ll queen(ll r)
{
    fo(j, 1, 8)
    {
        ok = true;
        fo(i, 1, r - 1) if (q[i] == j || q[i] == j - r + i || q[i] == j + r - i)
            ok = false;
        if (ok)
        {
            q[r] = j;
            if (r == 8)
            {
                t = 0;
                fo(i, 1, 8)
                    t += a[i][q[i]];
                k = max(k, t);
            }
            else
                queen(r + 1);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fo(i, 1, 8)
            fo(j, 1, 8)
                cin >>
        a[i][j];
    queen(1);
    cout << k;
}