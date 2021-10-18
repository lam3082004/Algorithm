#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int n, x, dem = 0, a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("NextRound.inp", "r", stdin);
    freopen("NextRound.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        if (a[i] >= a[x] && a[i] >= a[i + 1] && a[i] > 0)
            dem++;
    }
    cout << dem;
}