#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll t, n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> vec(40);
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            int cnt = 0;
            while (tmp)
            {
                tmp /= 2;
                cnt++;
            }
            vec[cnt]++;
        }
        ll ans = 0;
        for (auto x : vec)
            ans += (x * (x - 1)) / 2;
        cout << ans << '\n';
    }
}
