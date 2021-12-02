#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[105][105], q, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    fo(i, 1, 3)
            fo(j, 1, 3) cin >>
        a[i][j];
    cin >> n;
    fo(t, 1, n)
    {
        cin >> q;
        fo(i, 1, 3)
        {
            fo(j, 1, 3)
            {
                if (a[i][j] == q)
                {
                    a[i][j] = -1;
                }
            }
        }
    }
    if (a[1][1] == a[1][2] && a[1][2] == a[1][3] && a[1][2] == -1 || a[2][1] == a[2][2] && a[2][2] == a[2][3] && a[2][1] == -1 ||
        a[3][1] == a[3][2] && a[3][2] == a[3][3] && a[3][2] == -1 || a[1][1] == a[2][1] && a[2][1] == a[3][1] && a[1][1] == -1 ||
        a[1][2] == a[2][2] && a[2][2] == a[3][2] && a[2][2] == -1 || a[1][3] == a[2][3] && a[2][3] == a[3][3] && a[1][3] == -1 ||
        a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[2][2] == -1 || a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] == -1)
        cout << "Yes";
    else
        cout << "No";
}