#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
const ll mod = 1e9 + 7;
using namespace std;
ll n, f[nmax], t, s[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("uoc.inqqp", "r", stdin);
    freopen("uoc.out", "w", stdout);
#endif // ONLINE_JUDGE
    fo(i, 1, nmax)
    {
        fo(j, 1, nmax / i) f[i * j]++;
    }
    fo(i, 1, 10)
            cout
        << f[i] << ' ';
    // cin >> t;
    // fo(i, 1, t)
    // {
    //     cin >> n;
    //     cout << f[n] << '\n';
    // }
}
