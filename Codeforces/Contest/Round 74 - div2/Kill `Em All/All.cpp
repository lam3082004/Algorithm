#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a[nmax], r, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("All.inp", "r", stdin);
    freopen("All.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll s = 0, dem = 0;
        cin >> n >> r;
        fo(i, 1, n) cin >> a[i];
        sort(a + 1, a + n + 1);
        a[n + 1] = 0;
        for (int i = n; i >= 1; i--)
        {
            if (a[i] != a[i + 1])
            {
                if (a[i] > s)
                    dem++;
                else
                    break;
                s += r;
            }
        }
        cout << dem << '\n';
    }
}