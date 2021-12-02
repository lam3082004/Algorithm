#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, q, a[nmax], x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES41A.inp", "r", stdin);
    freopen("LES41A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    cin >> q;
    while (q--)
    {
        cin >> x;
        ll l = 1, r = n, pos = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (a[mid] == x)
            {
                pos = mid;
                break;
            }
            else if (a[mid] < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << pos << '\n';
    }
}