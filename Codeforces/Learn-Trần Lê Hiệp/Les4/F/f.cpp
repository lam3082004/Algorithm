#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 10000007
#define ii pair<ll, ll>
const ll mod = 2017;
using namespace std;
ll n, a[5005], b[5005], f[5005], z = 0;
ii c[5005];
ll d[5005], c1 = 0, d1 = 0;
ll maxx = -1e12;
// ll chap(int u, int v)
//{
//     ll s=1;
//     fo(i,u,v)
//     {
//         s += c[i]*d[i];
//     }
//     return s;
// }
void sub1()
{
    fo(i, 1, n)
    {
        ll s = 1;
        for (int j = i + 1; j <= n; j++)
        {
            fo(k, i, j) s *= a[k];
            c[++c1].fi = s;
            c[++c1].se = j - i + 1;
            s = 1;
        }
    }
    //    cout << maxx;
    fo(i, 1, c1)
    {
        cout << c[i].fi << ' ' << c[i].se;
        cout << '\n';
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n) cin >> b[i];
    //    fo(i, 1, n)
    //    {
    //        f[i] = a[i] * b[i];
    //    }
    if (n <= 500)
        sub1();
}
