#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
ll t, q, a, b, c, d, e, f, g, id = 0, id2 = 0;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Virtual.inp", "r", stdin);
    freopen("Virtual.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        int dem1 = 0, dem2 = 0, p1 = 0, p2 = 0;
        cin >> q;
        cin >> s;
        if (q == 1)
        {
            id++;
            cin >> a >> b;
            cout << s << ' ' << a << ' ' << b << ' ' << id;
        }
        else if (q == 2)
        {
            id2++;
            cin >> a >> b >> c >> d >> e >> f >> g;
            cout << s << ' ' << a << ' ' << b + c + d + e + f + g << ' ' << id2;
        }
        cout << '\n';
    }
}
