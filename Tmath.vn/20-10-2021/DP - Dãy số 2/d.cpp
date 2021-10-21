#include <bits/stdc++.h>
#define ll long long
#define nmax 1000005
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int n, a[nmax], b[nmax], t = 0, s, maxx = -1e18, k, dem = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    fo(i, 1, n) cin >> a[i];
    int j = 1, s = 0, i = 1;
    while (j <= n)
    {
        s += a[i];
        if (s <= k)
            dem++, i++;
        else
        {
            j++;
            i = j;
            s = 0;
        }
        if (i - 1 == n && s <= k)
            j++, s = 0, i = j;
        if (j == n + 1)
            break;
    }
    cout << dem;
}
