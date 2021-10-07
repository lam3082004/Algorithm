#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES26A.inp", "r", stdin);
    freopen("LES26A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    if (a == b)
        cout << "0";
    else
    {
        int k = (a + b) / 2;
        int t = (a + b) % 2;
        if (t == 0 && k >= 0)
            cout << k;
        else
            cout << "IMPOSSIBLE";
    }
}