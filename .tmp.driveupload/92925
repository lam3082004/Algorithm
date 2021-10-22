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
ll t, n, k, m, l['z' + 5];
string a, b;
bool ok;
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
        cin >> n >> k;
        cin >> a >> b;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        a = ' ' + a;
        b = ' ' + b;
        if (a == b)
        {
            cout << "Yes" << '\n';
            continue;
        }
        ok = 1;
        fo(i, 1, n) if (a[i] > b[i])
            ok = 0;
        if (!ok)
            cout << "No" << '\n';
        else
        {
            fo(i, 'a', 'z')
                l[i] = 0;
            fo(i, 1, n)
                l[a[i]]++;
            fo(i, 1, n) if (l[b[i]] > 0)
                l[b[i]]--;
            fo(i, 'a', 'z') if (l[i] % k != 0)
                ok = 0;
            fo(i, 'a', 'z')
                l[i] = 0;
            fo(i, 1, n)
                l[b[i]]++;
            fo(i, 1, n) if (l[a[i]] > 0)
                l[a[i]]--;
            fo(i, 'a', 'z') if (l[i] % k != 0)
                ok = 0;
            if (ok)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
}
