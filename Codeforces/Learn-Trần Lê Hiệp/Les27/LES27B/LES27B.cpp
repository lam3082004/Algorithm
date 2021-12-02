#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll k, x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES27B.inp", "r", stdin);
    freopen("LES27B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k >> x;
    if (k == 1)
    {
        cout << x;
        return 0;
    }
    fo(i, x - k + 1, x + k - 1)
            cout
        << i << ' ';
}