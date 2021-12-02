#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fn(i, a, b) for (int i = a; i >= b; i ==)
#define nmax 1000005
using namespace std;
ll a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES36B.inp", "r", stdin);
    freopen("LES36B.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    // if (10 * a == 8 * b)
    //     cout << 10 * b;
    // else
    //     cout << -1;
    fo(i, 1, 10000)
    {
        if (i * 8 / 100 == a && i / 10 == b)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}