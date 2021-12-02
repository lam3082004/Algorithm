#include <bits/stdc+.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll m, n, kq, dem = 0;
pair<ll, char> a[nmax];
string s = "";
char b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    s += '1';
    fo(i, 1, n - 1) s += '0';
    //    cout<<s;
    sort(a + 1, a + n + 1);
    fo(i, 1, m)
    {
        ll k = a[i].fi;
        cin >> a[i].fi >> a[i].se;
        if (a[i].fi == 1 || a[i].fi == 1 && a[i].se == 0)
            dem++;
        if (a[i].fi == a[i + 1].fi)
            k = min(k, a[i + 1]);
        s[k - 1] = a[i].se;
    }
    if (dem == 0)
        cout << -1;
    else
        cout << s;
}
