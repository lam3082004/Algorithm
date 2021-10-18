#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
int dem = 0, s, a[1005][1005], x, y;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("BeautifulMatrix.inp", "r", stdin);
    freopen("BeautifulMatrix.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fo(i, 1, 5)
            fo(j, 1, 5) cin >>
        a[i][j];
    fo(i, 1, 5)
        fo(j, 1, 5)
    {
        if (a[i][j] == 1)
        {
            x = i;
            y = j;
            break;
        }
    }
    cout << abs(x - 3) + abs(y - 3);
}