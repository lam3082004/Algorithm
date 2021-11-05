#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
int t, n, m, a[N];
char c[N];
bool solve()
{
    vector<int> l, r;
    fo(i, 1, n)
    {
        if (c[i] == 'B')
            l.push_back(a[i]);
        else
            r.push_back(a[i]);
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    if (!l.empty())
    {
        fo(i, 0, l.size() - 1) if (l[i] < i + 1) return false;
    }
    if (!r.empty())
    {
        fo(i, 0, r.size() - 1)
        {
            int x = r[i];
            int y = i + 1 + l.size();
            if (x > y)
                return false;
        }
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("new.inp", "r", stdin);
    freopen("new.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        fo(i, 1, n)
                cin >>
            a[i];
        fo(i, 1, n)
                cin >>
            c[i];
        if (solve())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}