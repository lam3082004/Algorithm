#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, h, n, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Free2play.inp", "r", stdin);
    freopen("Free2play.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        int dem = 0;
        cin >> h >> n;
        fo(i, 1, n) cin >> a[i];
        int i = 1;
        a[n + 1] = 0;
        while (i < n)
        {
            if (a[i + 1] != a[i + 2] + 1)
            {
                dem++;
                i++;
            }
            else
                i += 2;
        }
        cout << dem << '\n';
    }
}