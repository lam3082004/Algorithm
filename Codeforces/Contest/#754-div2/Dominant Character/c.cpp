#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
using namespace std;
ll T, n, dem = 0, dem1 = 0, dem2 = 0, ans = 1e18;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        s = " " + s;
        ans = 1e18;
        for (long long i = 1; i <= n; ++i)
        {
            dem = 0;
            dem1 = 0;
            dem2 = 0;
            for (long long j = i; j <= i + 7 && j <= n; ++j)
            {
                if (s[j] == 'a')
                    dem++;
                if (s[j] == 'b')
                    dem1++;
                if (s[j] == 'c')
                    dem2++;
                if (dem > dem1 && dem > dem2 && j - i + 1 >= 2)
                    ans = min(ans, j - i + 1);
            }
        }
        if (ans == 1e18)
            ans = -1;
        cout << ans << '\n';
    }
}
