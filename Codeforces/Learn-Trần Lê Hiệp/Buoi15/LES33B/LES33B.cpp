#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll tcs(ll x)
{
    int s = 0;
    while (x > 0)
    {
        x /= 10;
        s++;
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES33B.inp", "r", stdin);
    freopen("LES33B.out", "w", stdout);
#endif // ONLINE_JUDGE
    ll a, b, c;
    cin >> a >> b >> c;
    ll s = c / a;
    if (((s - 10000000) * a + tcs(s - 10000000) * b) <= c)
    {
        while (s > 0)
        {
            if ((s * a + tcs(s) * b) <= c)
            {
                // cout << k << tcs(k) << endl;
                if (s >= 1000000000)
                {
                    cout << 1000000000;
                    return 0;
                }
                else
                {
                    cout << s;
                    return 0;
                }
            }
            s--;
        }
        cout << 0;
    }
    else
    {
        s = c / b;
        ll k;
        while (s > 0)
        {
            if ((pow(10, s) * a + s * b) <= c)
            {
                k = s + 1;
                break;
            }
            s--;
        }
        // cout << k;
        cout << min((ll)1000000000, (c - k * b) / a);
    }
}