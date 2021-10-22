#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 105
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int t, q, n;
string s;
int l, r;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Subsequence.inp", "r", stdin);
    freopen("Subsequence.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        cin >> s;
        // s = ' ' + s;
        while (q--)
        {
            bool ok;
            cin >> l >> r;
            ok = 0;
            fo(i, r, n - 1) if (s[i] == s[r - 1])
                ok = 1;
            fo(i, 0, l - 2) if (s[i] == s[l - 1])
                ok = 1;
            if (ok)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}
