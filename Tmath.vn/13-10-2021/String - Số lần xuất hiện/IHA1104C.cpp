#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll hashs[nmax], hasht, power[nmax], dem = 0, m, n;
string s, t;
ll gets(int i, int j)
{
    return ((hashs[j] - hashs[i - 1] * power[j - i + 1]) % mod + mod) % mod;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("IHA1104C.inp", "r", stdin);
    freopen("IHA1104C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t >> s;
    n = s.size();
    m = t.size();
    s = ' ' + s;
    t = ' ' + t;
    hashs[0] = hasht = 0;
    power[0] = 1;
    fo(i, 1, n)
    {
        hashs[i] = (hashs[i - 1] * 31 + (s[i] - 'a' + 1)) % mod;
        if (i <= m)
            hasht = (hasht * 31 + (t[i] - 'a' + 1)) % mod;
        power[i] = (power[i - 1] * 31) % mod;
    }
    fo(i, 1, n - m + 1) if (gets(i, i + m - 1) == hasht) dem++;
    // cout << hasht / 31 << ' ';
    cout << dem;
}