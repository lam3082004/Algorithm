#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], dem = 0, x = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES34D.inp", "r", stdin);
    freopen("LES34D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    int i = 1;
    while (i <= n)
    {
        if (a[i] == x)
        {
            dem++;
            x++;
        }
        i++;
    }
    if (dem == 0)
        cout << -1;
    else
        cout << n - dem;
}