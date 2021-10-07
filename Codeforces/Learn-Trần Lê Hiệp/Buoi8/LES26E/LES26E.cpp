#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll f[nmax][15];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES26E.inp", "r", stdin);
    freopen("LES26E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    f[0][0] = 1;
    fo(i, 0, s.size() - 1)
    {
        if (s[i] != '?')
        {
            fo(k, 0, 12)
            {
                ll p = (k * 10 + (s[i] - '0')) % 13;
                f[i + 1][p] = (f[i + 1][p] + f[i][k]) % mod;
            }
        }
        else
        {
            fo(j, 0, 9)
            {
                fo(k, 0, 12)
                {
                    ll p = (k * 10 + j) % 13;
                    f[i + 1][p] = (f[i + 1][p] + f[i][k]) % mod;
                }
            }
        }
    }
    cout << f[s.size()][5];
}