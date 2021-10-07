#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, poww[nmax], powm[nmax], hashs[nmax], hasht[nmax], a, b, t;
ll gets(ll i, ll j)
{
    return (((hashs[j] - hashs[i - 1] * poww[j - i + 1]) % mod) + mod) % mod;
}
ll gett(ll i, ll j)
{
    return (((hasht[i] - hasht[j + 1] * poww[j - i + 1]) % mod) + mod) % mod;
}
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
    cin >> n;
    cin >> s;
    n = s.size();
    s = " " + s;
    poww[0] = 1;
    for (int i = 1; i <= n; i++)
        poww[i] = (poww[i - 1] * mod) % mod;
    hashs[n + 1] = 0;
    hasht[n + 1] = 0;
    for (int i = 1; i <= n; i++)
        hashs[i] = (hashs[i - 1] * mod + s[i] - 'a' + 1) % mod;
    for (int i = n; i >= 1; i--)
        hasht[i] = (hasht[i + 1] * mod + s[i] - 'a' + 1) % mod;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        if (gets(a, b) == gett(a, b))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}