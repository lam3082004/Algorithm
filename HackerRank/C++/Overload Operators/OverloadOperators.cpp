#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string a, b;
ll x1, x2, s = 0, p = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("OverloadOperators.inp", "r", stdin);
    freopen("OverloadOperators.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    fo(i, 0, a.size() - 1)
    {
        if (a[i] == '+')
        {
            x1 = i;
        }
    }
    fo(i, 0, b.size() - 1)
    {
        if (b[i] == '+')
        {
            x2 = i;
        }
    }
    fo(i, 0, x1 - 1)
    {
        s += a[i] - '0';
    }
    fo(i, 0, x2 - 1)
    {
        s += b[i] - '0';
    }
    fo(i, x1 + 2, a.size() - 1)
    {
        p += a[i] - '0';
    }
    fo(i, x2 + 2, b.size() - 1)
    {
        p += b[i] - '0';
    }
    cout << s << "+i" << p;
}
