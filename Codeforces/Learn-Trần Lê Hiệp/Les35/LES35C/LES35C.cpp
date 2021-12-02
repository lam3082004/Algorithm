
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], b[nmax], c[nmax], dem = 0, dem1 = 0, dem2 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES35C.inp", "r", stdin);
    freopen("LES35C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n) cin >> b[i];
    do
    {
        dem1++;
    } while (next_permutation(a + 1, a + n + 1));
    do
    {
        dem2++;
    } while (next_permutation(b + 1, b + n + 1));
    cout << abs(dem1 - dem2);
    // cout << dem1 << ' ' << dem2;
    // cout << abs(dem1 - dem2);
}