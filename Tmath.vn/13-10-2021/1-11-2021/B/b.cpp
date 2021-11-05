#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
const int mod = 998244353;
string s, p1 = "", p2 = "";
int n, q, a, b, c;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> s;
    fo(i, 0, n - 1) p1 += s[i];
    fo(i, n, 2 * n - 1) p2 += s[i];
    cin >> q;
    while (q--)
    {
        cin >> a >> b >> c;
        if (a == 1)
        {
            if (c >= n + 1 && b <= n)
                swap(p1[b - 1], p2[c - n - 1]);
            else if (b <= n && c <= n)
                swap(p1[b - 1], p1[c - 1]);
            else if (b > n && c > n)
                swap(p2[b - n - 1], p2[c - n - 1]);
        }
        else
        {
            swap(p1, p2);
        }
    }
    fo(i, 0, n - 1) cout << p1[i];
    fo(i, 0, n - 1) cout << p2[i];
}
