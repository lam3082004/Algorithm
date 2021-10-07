#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 1e2 + 5;
int t, n, a[N], b[N], l[N], r[N];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("ShiftingSort.inp", "r", stdin);
    freopen("ShiftingSort.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        fo(i, 1, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + 1 + n);
        int res = 0;
        fod(i, n, 1)
        {
            if (a[i] != b[i])
            {
                int pos = 0;
                fod(j, i, 1) if (b[i] == a[j])
                {
                    pos = j;
                    break;
                }
                res++;
                l[res] = pos;
                r[res] = i;
                int x = a[pos];
                fo(j, pos, i - 1)
                    a[j] = a[j + 1];
                a[i] = x;
            }
        }
        cout << res << '\n';
        fo(i, 1, res)
                cout
            << l[i] << ' ' << r[i] << ' ' << 1 << '\n';
    }
}