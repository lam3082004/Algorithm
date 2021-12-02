#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], dem = 0, b[6];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES25B.inp", "r", stdin);
    freopen("LES25B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 3, n - 2)
    {
        b[1] = a[i - 2];
        b[2] = a[i - 1];
        b[3] = a[i];
        b[4] = a[i + 1];
        b[5] = a[i + 2];
        sort(b + 1, b + 6);
        if (b[3] == a[i])
            dem++;
    }
    cout << dem;
}