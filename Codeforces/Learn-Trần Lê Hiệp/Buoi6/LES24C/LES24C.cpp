#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], s[nmax], x, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES24C.inp", "r", stdin);
    freopen("LES24C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> x;
    fo(i, 1, n) cin >> a[i];
    a[0] = 0;
    fo(i, 0, n) s[i] = s[i - 1] + a[i];
    fo(i, 0, n)
    {
        if (s[i] <= x)
            dem++;
    }
    // fo(i, 1, n) cout << s[i] << " ";
    cout << dem;
}