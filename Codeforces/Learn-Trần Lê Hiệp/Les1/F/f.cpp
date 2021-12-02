#include <bits/stdc++.h>
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define fi first
#define se second
#define el '\n'
#define ii pair<ll, ll>
using namespace std;
ll n, l, r, a[5000009], z, t;
ii sav[5000009];
bool check(int a, int b, int c, int d)
{
    if (a != b || a != c || a != d || b != c || b != d || c != d)
        return true;
    return false;
}
bool ktra(int a1, int b, int c, int d)
{
    if (a[a1] + a[b] == a[c] + a[d] || a[a1] + a[c] == a[b] + a[d] || a[a1] + a[d] == a[c] + a[b])
        return true;
    return false;
}
int main()
{
    faster()
            cin >>
        n;
    memset(sav, (0, 0), sizeof(sav));
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int x = 1; x <= n; x++)
        for (int y = 1; y <= x - 1; y++)
        {
            if (x != y)
                if (sav[a[x] + a[y]] != ii(0, 0))
                {
                    z = sav[a[x] + a[y]].fi;
                    t = sav[a[x] + a[y]].se;
                    if (check(x, y, z, t))
                        if (ktra(x, y, z, t))
                        {
                            cout << "YES" << el;
                            cout << x << " " << y << " " << z << " " << t;
                            exit(0);
                        }
                }
                else
                    sav[a[x] + a[y]] = ii(x, y);
        }
    cout << "NO";
}
