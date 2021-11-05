#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll t, n, a[nmax], maxx = 1e18, ans = 1e18;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    sort(a + 1, a + n + 1);
    fo(i, 1, 1000000)
    {
        ll s = 0, k = 1;
        fo(j, 1, n)
        {
            s += abs(a[j] - k);
            if (s > maxx)
                break;
            k *= i;
        }
        maxx = min(maxx, s);
    }
    cout << maxx;
}
