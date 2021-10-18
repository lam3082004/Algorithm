#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, hashs[nmax], hasha[nmax], poww[nmax], q, l, r, dem = 0;
string s;
ll gett(ll l, ll r)
{
    return ((hashs[r] - hashs[l - 1] * poww[r - l + 1]) % mod + mod) % mod;
}
ll gets(ll l, ll r)
{
    return ((hasha[l] - hasha[r + 1] * poww[r - l + 1]) % mod + mod) % mod;
}
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2);
    tam = tam * tam;
    if (b % 2 == 1)
        tam = tam * a;
    return tam;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    n = s.size();
    s = ' ' + s;
    poww[0] = 1;
    fo(i, 1, n)
        poww[i] = (poww[i - 1] * 31) % mod;
    fo(i, 1, n)
        hashs[i] = (hashs[i - 1] * 31 + s[i] - 'a' + 1) % mod;
    for (int i = n; i >= 1; i--)
        hasha[i] = (hasha[i + 1] * 31 + s[i] - 'a' + 1) % mod;
    fo(l, 1, n)
        fo(r, l, n) if (gett(l, r) != gets(l, r))
            dem++;
    cout << dem;
}