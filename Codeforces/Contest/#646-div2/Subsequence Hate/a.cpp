#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
long long t, n, u1[1005], v1[1005], u0[1005], v0[1005], dem;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = s.size();
        s = " " + s;
        for (int i = 1; i <= n; i++)
        {
            u0[i] = u0[i - 1] + (s[i] == '0');
            u1[i] = u1[i - 1] + (s[i] == '1');
        }
        v0[n + 1] = v1[n + 1] = 0;
        // fo(i, 1, n) cout << u0[i] << ' ';
        for (int i = n; i >= 1; i--)
        {
            v0[i] = v0[i + 1] + (s[i] == '0');
            v1[i] = v1[i + 1] + (s[i] == '1');
        }
        dem = n;
        for (int i = 1; i <= n; i++)
            dem = min(dem, min(u0[i - 1], u1[i - 1]) + min(v0[i], v1[i]));
        cout << dem << '\n';
    }
}