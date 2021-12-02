#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<int, int>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 1e2 + 5;
int n, l[N];
char a[N];
void bk(int x)
{
    fo(i, 'a', l[x - 1] + 1)
    {
        a[x] = i;
        l[x] = max(l[x - 1], i);
        if (x == n)
        {
            fo(j, 1, n)
                    cout
                << char(a[j]);
            cout << '\n';
        }
        else
            bk(x + 1);
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
    a[1] = 'a';
    l[1] = 'a';
    if (n == 1)
    {
        cout << 'a';
        return 0;
    }
    bk(2);
}
