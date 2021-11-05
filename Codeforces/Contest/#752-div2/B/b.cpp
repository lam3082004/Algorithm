#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a[nmax], n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll s = 1;
        cin >> n;
        fo(i, 1, n) cin >> a[i];
        if (n % 2 == 0)
            s = 0;
        fo(i, 2, n)
        {
            if (a[i] <= a[i - 1])
                s = 0;
        }
        if (s == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}