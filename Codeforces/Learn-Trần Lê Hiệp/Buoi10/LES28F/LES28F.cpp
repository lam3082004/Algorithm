#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string a, b;
int n, m, z = -1, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES28F.inp", "r", stdin);
    freopen("LES28F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    n = a.size() - 1;
    m = b.size() - 1;
    int i = 0, j = 0;
    while (i <= n + 1 && j <= m + 1)
    {
        if (a[i] != b[j])
            j++;
        if (j == m)
            break;
        if (i == n - 1)
        {
            i = 0;
            dem++;
        }
        i++;
        // if (dem == 1 && j == 0)
        // {
        //     cout << -1;
        //     return 0;
        // }
    }
    // dem = (dem + 1) * (n + 1);
    // cout << dem << ' ' << a[4] << ' ' << b[m] << ' ';
    fo(k, 0, n)
    {
        if (a[k] == b[m])
        {
            z = k;
            break;
        }
    }
    z++;
    cout << i << ' ' << z << ' ' << dem << ' ';
    if (z == -1)
        cout << -1;
    else
    {
        if (z <= i)
            cout << (dem + 1) * (n + 1) + i - z + 1;
        else
            cout << dem * (n + 1) + z;
    }
}