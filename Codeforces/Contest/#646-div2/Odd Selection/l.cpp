#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, n, a[nmax], x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll dem = 0;
        cin >> n >> x;
        fo(i, 1, n) cin >> a[i];
        fo(i, 1, n)
        {
            if (a[i] % 2 == 1)
                dem++;
        }
        if (dem == 0)
            cout << "NO";
        else if (dem == n)
        {
            if (x % 2 == 0)
                cout << "NO";
            else
                cout << "YES";
        }
        else
        {
            if (x > n)
                cout << "NO";
            else if (x == n)
            {
                if (dem % 2 == 1)
                    cout << "YES";
                else
                    cout << "NO";
            }
            else
                cout << "YES";
        }
        cout << '\n';
    }
}