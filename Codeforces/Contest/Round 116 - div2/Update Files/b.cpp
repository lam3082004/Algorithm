#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
int t;
long long n, k;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll n, k, cur = 1, ans = 0;
        cin >> n >> k;
        while (n > cur and k >= cur)
        {
            cur *= 2;
            ans += 1;
        }
        cout << ans + (n - cur + k - 1) / k << "\n";
    }
}
