#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll n, a[105], b[105], dem = 0, pos = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < a[i + 1])
        {
            for (int j = n; j >= i; j--)
            {
                if (a[i] < a[j])
                {
                    swap(a[i], a[j]);
                    pos = i;
                    break;
                }
            }
            break;
        }
    }
    sort(a + pos + 1, a + n + 1);
    fo(i, 1, n)
            cout
        << a[i] << ' ';
}
