#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a, b, r, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << a;
        }
        else
        {
            if (a > b)
                cout << (a + b);
            else
            {
                ll k = b / a * a;
                cout << (k + b) / 2;
            }
        }
        cout << '\n';
    }
}