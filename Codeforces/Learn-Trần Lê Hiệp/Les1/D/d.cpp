#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, t, k;
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
        cin >> n >> k;
        ll p = k / (n - 1), q = k % (n - 1);
        if (q == 0)
            cout << n * p - 1;
        else
            cout << n * p + q;
        // cout<<n*p
        cout << '\n';
    }
}
