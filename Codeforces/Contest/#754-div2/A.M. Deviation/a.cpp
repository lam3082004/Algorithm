#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
using namespace std;
ll t, a, b, c;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        ll s = a + b + c;
        if (s % 3 == 0)
            cout << 0;
        else
            cout << 1;
        cout << '\n';
    }
}
