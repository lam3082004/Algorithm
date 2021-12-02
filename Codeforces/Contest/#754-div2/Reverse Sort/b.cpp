#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
using namespace std;
int t, n;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        s = ' ' + s;
        string q = s;
        sort(q.begin(), q.end());
        if (q == s)
            cout << 0 << '\n';
        else
        {
            vector<int> p, r;
            fo(i, 1, n) if (q[i] == '0' && s[i] == '1')
                p.push_back(i);
            cout << 1 << '\n'
                 << 2 * p.size() << ' ';
            for (auto u : p)
                cout << u << ' ';
            for (int i = n; i >= 1; i--)
            {
                if (r.size() == p.size())
                    break;
                if (s[i] == '0')
                    r.push_back(i);
            }
            for (int i = r.size() - 1; i >= 0; i--)
                cout
                    << r[i] << ' ';
            cout << '\n';
        }
    }
}
