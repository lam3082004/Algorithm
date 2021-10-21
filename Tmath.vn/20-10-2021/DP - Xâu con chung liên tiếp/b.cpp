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
ll m, n, f[5005][5005], maxx = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    m = a.size();
    n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    fo(i, 1, m)
        fo(j, 1, n) if (a[i] == b[j])
            f[i][j] = f[i - 1][j - 1] + 1,
            maxx = max(maxx, f[i][j]);
    cout << maxx;
}
