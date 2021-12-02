

#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES37C.inp", "r", stdin);
    freopen("LES37C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    if (n < k)
        cout << min(n, k - n);
    else if (n == k)
        cout << 0;
    else
    {
        if (n % k == 0)
        {
            cout << 0;
            return 0;
        }
        cout << min(n % k, k - n % k);
    }
}