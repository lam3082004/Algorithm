#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e3 + 5;
int n, m, c[15][15], a[15];
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
            fo(j, 1, n)
                cin >>
        c[i][j];
    fo(i, 1, n)
        a[i] = i;
    int ans = 1e9;
    do
    {
        int tmp = 0;
        fo(i, 2, n)
            tmp += c[a[i - 1]][a[i]];
        ans = min(ans, tmp);
    } while (next_permutation(a + 1, a + 1 + n));
    cout << ans;
}