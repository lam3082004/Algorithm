#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, l, a[nmax], minn = 1e9, s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES31B.inp", "r", stdin);
    freopen("LES31B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> l;
    fo(i, 1, n)
        a[i] = l + i - 1;
    fo(i, 1, n)
        s += a[i];
    fo(i, 1, n)
        minn = min(minn, abs(a[i]));
    fo(i, 1, n)
    {
        if (a[i] < 0 && a[i] == -abs(minn))
        {
            minn = a[i];
            break;
        }
    }
    cout << s - minn;
}