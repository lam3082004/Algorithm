#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int n, t;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        fo(i, 1, n)
        {
            fo(j, 1, i)
                    cout
                << "(";
            fo(j, 1, i)
                    cout
                << ")";
            fo(j, 1, n - i)
                    cout
                << "(";
            fo(j, 1, n - i)
                    cout
                << ")";
            cout << '\n';
        }
    }
}