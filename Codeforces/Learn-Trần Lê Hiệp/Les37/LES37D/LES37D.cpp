#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, x, y, f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES37D.inp", "r", stdin);
    freopen("LES37D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> x >> y;
    fo(i, 1, n - 1)
        fo(j, i + 1, n)
    {
        int ans = min(j - i, abs(i - x) + abs(j - y) + 1);
        f[ans]++;
    }
    fo(i, 1, n - 1) cout << f[i] << '\n';
}