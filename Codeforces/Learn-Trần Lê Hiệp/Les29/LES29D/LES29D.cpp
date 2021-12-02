#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], b[nmax], s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES29D.inp", "r", stdin);
    freopen("LES29D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n - 1) cin >> b[i];
    if (n == 2)
    {
        cout << b[1] * 2;
        return 0;
    }
    for (int i = n - 2; i >= 1; i--)
    {
        if (b[i] > b[i + 1])
            a[i + 1] = b[i + 1],
                  a[i] = b[i];
        else
        {
            a[i + 1] = b[i];
            if (b[i] <= b[i - 1])
                a[i] = b[i];
            else
                a[i] = b[i - 1];
        }
    }
    a[n] = b[n - 1];
    a[1] = b[1];
    fo(i, 1, n)
    {
        // cout << a[i] << ' ';
        s += a[i];
    }
    cout << s;
}