#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int a[4], b, c, d, t;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Combinatorics.inp", "r", stdin);
    freopen("Combinatorics.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        int s = 0;
        cin >> a[1] >> a[2] >> a[3] >> d;
        sort(a + 1, a + 4);
        int p = a[1] + a[2] + a[3] - 3;
        if (p == d)
            cout << "YES";
        else if (p > d)
        {
            if (a[3] - a[2] - a[1] - 1 <= d)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";
        cout << '\n';
    }
}