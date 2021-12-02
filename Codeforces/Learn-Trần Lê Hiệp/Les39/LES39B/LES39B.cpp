#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<ll, ll>
const ll mod = 1e9 + 7;
using namespace std;
unsigned long long s = 1, a[nmax], n, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES39B.inp", "r", stdin);
    freopen("LES39B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        if (a[i] == 0)
            dem++;
    }
    fo(i, 1, n)
    {
        if (dem > 0)
        {
            s = 0;
            break;
        }
        if (s > 1000000000000000000 / a[i])
        {
            cout << -1;
            return 0;
        }
        s *= a[i];
    }
    if (s > 1000000000000000000)
        cout << -1;
    else
        cout << s;
}
