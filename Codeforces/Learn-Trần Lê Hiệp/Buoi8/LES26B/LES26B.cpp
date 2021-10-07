#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
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
    freopen("LES26B.inp", "r", stdin);
    freopen("LES26B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    if (a % (2 * b + 1) == 0)
        cout << a / (2 * b + 1);
    else
        cout << a / (2 * b + 1) + 1;
}