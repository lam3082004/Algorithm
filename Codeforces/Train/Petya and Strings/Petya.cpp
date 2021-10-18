#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int s = 0;
string a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Petya.inp", "r", stdin);
    freopen("Petya.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    fo(i, 0, b.size() - 1)
    {
        if (b[i] >= 65 && b[i] <= 90)
        {
            b[i] = b[i] + 32;
        }
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
    }
    if (a > b)
        cout << 1;
    else if (a < b)
        cout << -1;
    else
        cout << 0;
}