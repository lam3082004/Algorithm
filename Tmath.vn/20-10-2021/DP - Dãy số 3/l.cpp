#include <bits/stdc++.h>
#define ll long long
#define nmax 100005
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll n, a[nmax], s = 0;
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
    fo(i, 1, n)
    {
        cin >> a[i];
        s += abs(a[i]);
    }
    sort(a + 1, a + n + 1);
    cout << s - abs(a[1]);
}
