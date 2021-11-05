#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int t, n, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        int check = 1;
        cin >> n;
        fo(i, 1, n)
                cin >>
            a[i];
        ll res = 1;
        fo(i, 1, n)
        {
            ll x = i + 1;
            res = res * x / __gcd(res, x);
            if (a[i] % res == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << '\n';
    }
}