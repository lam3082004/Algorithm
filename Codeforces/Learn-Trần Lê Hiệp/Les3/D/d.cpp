#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, a[nmax], s[nmax], kq = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    s[0] = 0;
    int j = 1;
    fo(i, 1, n)
    {
        while (s[j] - s[i - 1] <= m && j <= n)
            j++;
        kq += j - i;
    }
    cout << kq;
}
