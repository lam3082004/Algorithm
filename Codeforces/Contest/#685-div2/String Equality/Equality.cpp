#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
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
    freopen("Equality.inp", "r", stdin);
    freopen("Equality.out", "w", stdout);
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
            swap(s[b - 1], s[c - 1]);
            swap(p1[a - 1], p2[c - n - 1]);
        }
        else
        {
            s = "";
            s += p2;
            s += p1;
            string p3 = p1, p4 = p2;
            p1 = "";
            p2 = "";
            p1 += p4;
            p2 += p3;
        }
    }
    cout << s;
}