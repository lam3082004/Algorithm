#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll a[nmax], b[nmax], c[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES33D.inp", "r", stdin);
    freopen("LES33D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    int n = s.size();
    s = ' ' + s;
    fo(i, 1, s.size())
    {
        if (s[i] == 'R')
        {
            if (s[i] == 'R')
                a[i + 1] = a[i] + 1,
                      a[i] = 0;
        }
    }
    for (ll i = n; i >= 1; i--)
    {
        if (s[i] == 'L')
            b[i - 1] = b[i] + 1,
                  b[i] = 0;
    }
    int i = 1;
    while (i <= n)
    {
        if (a[i + 1] >= 1 && b[i] >= 1 || a[i] > 0 && b[i + 1] > 0)
        {
            c[i] = (a[i + 1] + 1) / 2 + b[i] / 2,
            c[i + 1] = a[i + 1] / 2 + (b[i] + 1) / 2;
            i += 2;
        }
        else
            c[i] = 0, i++;
    }
    fo(i, 1, n) cout << c[i] << ' ';
}