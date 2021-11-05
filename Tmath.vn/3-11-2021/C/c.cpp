#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll n, a[nmax], s = 0, b[nmax];
map<int, int> f;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        b[i] = a[i];
        f[b[i]] = i;
    }
    sort(b + 1, b + 1 + n);
    fo(i, 1, n)
    {
        if (i % 2 != f[b[i]] % 2)
            s++;
    }
    cout << s / 2;
}
