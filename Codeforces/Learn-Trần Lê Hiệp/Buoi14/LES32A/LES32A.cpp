#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES32A.inp", "r", stdin);
    freopen("LES32A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    if (a >= 10 || b >= 10 || a >= 10 && b >= 10)
        cout << -1;
    else
        cout << a * b;
}