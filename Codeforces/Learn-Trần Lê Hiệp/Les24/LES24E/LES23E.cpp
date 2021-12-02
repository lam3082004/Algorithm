#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, s = 0, p[nmax];
ii a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES24E.inp", "r", stdin);
    freopen("LES24E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
        swap(a[i].fi, a[i].se);
    }
    sort(a + 1, a + n + 1);
    p[1] = p[1 - 1] + a[1].se;
    fo(i, 2, n)
    {
        p[i] = p[i - 1] + a[i].se;
    }
    // fo(i, 1, n)
    // {
    //     cout << p[i];
    //     cout << endl;
    // }
    fo(i, 1, n)
    {
        if (a[i].fi < p[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}