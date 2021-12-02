#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int a, n, q, t, z = 0;
tuple<int, int, int> X[505 * 505];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        fo(j, 1, n)
        {
            cin >> a;
            X[++z] = make_tuple(a, i, j);
        }
    }
    sort(X + 1, X + z + 1);
    cin >> t;
    while (t--)
    {
        cin >> q;
        int l = 1, r = z, pos = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (get<0>(X[mid]) == q)
            {
                pos = mid;
                break;
            }
            if (get<0>(X[mid]) > q)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (pos == -1)
            cout << pos << '\n';
        else
            cout << get<1>(X[pos]) << ' ' << get<2>(X[pos]) << '\n';
    }
}
