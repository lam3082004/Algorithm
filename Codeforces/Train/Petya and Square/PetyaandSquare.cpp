#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int a, b, c, dem = 0;
int n, x, y;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("PetyaandSquare.inp", "r", stdin);
    freopen("PetyaandSquare.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x >> y;
    if ((x == n / 2 || x == n / 2 + 1) && (y == n / 2 || y == n / 2 + 1))
        cout << "NO";
    else
        cout << "YES";
}