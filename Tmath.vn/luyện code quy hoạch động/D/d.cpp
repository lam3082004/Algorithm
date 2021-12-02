#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1005
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
const int mod = 998244353;
ll t, n;
string m, f[100];
string sum(string a, string b)
{
    string res = "";
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    int t = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int tmp = a[i] - 48 + b[i] - 48 + t;
        t = tmp / 10;
        tmp = tmp % 10;
        res = (char)(tmp + 48) + res;
    }
    if (t > 0)
        res = "1" + res;
    return res;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[0] = '1';
    f[1] = '1';
    fo(i, 2, 92) f[i] = sum(f[i - 1], f[i - 2]);
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << f[n] << '\n';
    }
}
