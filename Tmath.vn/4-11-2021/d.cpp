#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll n, a[nmax], minn = 1e9, s = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> n >> k;
    fo(i, 1, n)
    {
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    //    sort(a + 1, a + n + 1);
    int pos = 0;
    fo(i, 1, n)
    {
        if (a[i] == minn)
        {
            pos = i;
            break;
        }
    }
    fo(i, )
}
