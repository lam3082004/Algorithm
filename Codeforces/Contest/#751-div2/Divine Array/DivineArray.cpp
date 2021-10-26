#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
const int base = 1e9 + 7;
ll a[2005][2005], q, n;
int f[nmax];
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("DivineArray.inp", "r", stdin);
    freopen("DivineArray.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> q;
    while (q--)
    {
        ll c, d, t;
        cin >> n;
        fo(i, 1, n) cin >> a[0][i];
        fo(i, 1, n)
        {
            fo(j, 1, n) f[j] = 0;
            fo(j, 1, n) f[a[i - 1][j]]++;
            fo(j, 1, n) a[i][j] = f[a[i - 1][j]];
        }
        cin >> t;
        while (t--)
        {
            cin >> c >> d;
            cout << a[min(d, n)][c];
            cout << '\n';
        }
    }
}
// Array Elimination
