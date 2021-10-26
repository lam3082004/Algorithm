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
const int mod = 1e9 + 9;
ll n, a[nmax], l, r, mi = -1e18, mx = 1e18;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> l >> r;
    fo(i, 1, n)
    {
        cin >> a[i];
        mi = min(mi, a[i]);
        mx = max(mx, a[i]);
    }
    sort(a + 1, a + n + 1);
    if (mx <= l || l >= mi && l <= mx && r > mx)
        cout << r;
    else if (mi >= r || r <= mx && r >= mi && l < mi)
        cout << l;
    else
    {
        ll p1 = n, p2 = 1;
        while (p1 > 0)
        {
            if (a[p1] <= r)
                break;
            p1--;
        }
        while (p2 <= n)
        {
            if (a[p2] >= l)
                break;
            p2++;
        }
        ll mx2 = 0, kq = 0;
        fo(i, p2, p1 - 1)
        {
            mx2 = max(mx2, abs(a[i + 1] - a[i]));
        }
        for(int i=p1 - 1;i >= p2; i--)
        {
            if (abs(a[i] - a[i-1]) == mx2)
            {
                kq = a[i];
                break;
            }
        }
//        cout<<p1<<' '<<p2<<' '<<mx2;
        ll k = max(max(mx2 / 2, abs(a[1] - l)), abs(a[n] - r));
//        cout<<kq;
        if (k == mx2 / 2)
        {
            cout << kq + mx2 / 2;
        }
        else if (k == abs(a[1] - l))
        {
            cout << l;
        }
        else
            cout << r;
    }
}
