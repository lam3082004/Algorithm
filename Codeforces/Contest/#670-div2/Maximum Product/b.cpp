#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
#define ii pair<int, int>
#define fi first
#define se second
#define oo 1e9
using namespace std;
const int mod = 998244353;
ll t, n, a[nmax], kq = 0, x;
ll cmp(int a, int b)
{
    return abs(a) > abs(b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        fo(i, 1, n)
                cin >>
            a[i];
        sort(a + 1, a + 1 + n, cmp);
        //        fo(i,1,n)
        //            cout<<a[i]<<' ';
        //        cout<<'\n';
        ll tmp = 1, s = 0, pos1 = 0, pos2 = 0, ans;
        fo(i, 1, 5)
        {
            tmp *= a[i];
            s += (a[i] < 0);
            if (a[i] < 0)
                pos1 = i;
            if (a[i] > 0)
                pos2 = i;
        }
        ans = tmp;
        if (s & 1)
        {
            fo(i, 6, n) if (a[i] > 0 && pos1 > 0)
            {
                ans = max(ans, tmp / a[pos1] * a[i]);
                break;
            }
            fo(i, 6, n) if (a[i] < 0 && pos2 > 0)
            {
                ans = max(ans, tmp / a[pos2] * a[i]);
                break;
            }
        }
        sort(a + 1, a + 1 + n);
        ans = max(ans, a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1] * a[n]);
        cout << ans << '\n';
    }
}
