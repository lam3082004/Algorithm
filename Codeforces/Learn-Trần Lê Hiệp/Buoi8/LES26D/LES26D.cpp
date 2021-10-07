#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], b[nmax], s = 0, check = true;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES26D.inp", "r", stdin);
    freopen("LES26D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n + 1) cin >> a[i];
    fo(i, 1, n) cin >> b[i];
    int i = 1;
    while (i <= n)
    {
        if (b[i] < a[i])
            s += b[i], i++;
        else if (a[i] <= b[i])
        {
            if (a[i + 1] <= b[i] - a[i])
            {
                s += a[i] + a[i + 1];
                a[i + 1] = 0;
            }
            else
            {
                s += b[i];
                a[i + 1] -= b[i] - a[i];
            }
            i++;
        }
    }
    cout << s;
}