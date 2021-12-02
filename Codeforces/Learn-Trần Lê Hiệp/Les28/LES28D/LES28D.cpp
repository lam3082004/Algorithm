
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], b[nmax], k, maxx = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES28C.inp", "r", stdin);
    freopen("LES28C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n - 1)
    {
        if (a[i] >= a[i + 1])
            b[i] = b[i - 1] + 1;
        else
            b[i] = 0;
    }
    fo(i, 1, n) maxx = max(maxx, b[i]);
    cout << maxx;
}