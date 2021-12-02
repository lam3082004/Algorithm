#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 2000005
using namespace std;
ll n, t, p = 0, a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    fo(i, 1, t)
    {
        cin >> n;
        fo(i, 1, sqrt(n))
        {
            if (n % i == 0)
            {
                cout << i;
            }
        }
    }
}
