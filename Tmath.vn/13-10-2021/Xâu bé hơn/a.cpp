#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string a, b, x = "", y = "";
ll t = 0, z = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    fo(i, 1, b[0] - 48)
        x += a;
    fo(i, 1, a[0] - 48)
        y += b;
    if (x < y)
        cout << x;
    else if (y < x)
        cout << y;
    else
        cout << x;
}