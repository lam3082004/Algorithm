#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES36A.inp", "r", stdin);
    freopen("LES36A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> a >> b;
    if (a == 0)
        cout << 0;
    else
    {
        ll t = n / (a + b);
        if (t * (a + b) == n)
            cout << t * a;
        else if (t * (a + b) + a >= n)
            cout << n - t * b;
        else
            cout << (t + 1) * a;
    }
}