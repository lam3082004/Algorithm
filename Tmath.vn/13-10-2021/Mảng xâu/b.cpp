#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define ii pair<ll, int>
#define fi first
#define se second
using namespace std;
int n, m;
string s[55];
bool check(string q)
{
    for (auto u : q)
        if (u < '0' || u > '9')
            return false;
    return true;
}
bool ss(string a, string b)
{
    if (a.size() > b.size())
        return true;
    if (a.size() < b.size())
        return false;
    if (a > b)
        return true;
    else
        return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n)
            cin >>
        s[i];
    fo(i, 1, n)
        fo(j, i + 1, n) if (check(s[i]) && check(s[j]) && ss(s[i], s[j]))
            swap(s[i], s[j]);
    fo(i, 1, n)
            cout
        << s[i] << ' ';
}