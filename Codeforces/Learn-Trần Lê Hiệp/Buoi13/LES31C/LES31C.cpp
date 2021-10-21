
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], s = 0, mx = -1e18, mi = 1e18, mx2 = -1e18;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES31C.inp", "r", stdin);
    freopen("LES31C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mi = min(mi, a[i]);
    }
    fo(i, 1, n)
    {
        if (a[i] != mx)
            mx2 = max(mx2, a[i]);
        else
            s++;
    }
    fo(i, 1, n)
    {
        if (mi == mx)
            cout << mi;
        else
        {
            if (a[i] != mx)
                cout << mx;
            else
            {
                if (s > 1)
                    cout << mx;
                else
                    cout << mx2;
            }
        }
        cout << '\n';
    }
}